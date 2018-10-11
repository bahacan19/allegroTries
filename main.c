#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <unistd.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/mouse.h>
#include <allegro5/mouse_cursor.h>
#include <allegro5/allegro_primitives.h>
#include "map1.c"
#include "map2.c"

ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_BITMAP *image1 = NULL;
ALLEGRO_BITMAP *image2 = NULL;
ALLEGRO_FONT *font;

ALLEGRO_EVENT_QUEUE *queue;
ALLEGRO_EVENT event;

const int first_display_width = 1300;
const int first_display_height = 1000;
const float map1_start_x = 100, map1_start_y = 100;
const float map_width = 500, map_height = 500;
const float map2_start_x = 700;
const float map2_start_y = 100;

bool decide_mouse_click_position(int x, int y);


void main_draw();

int main() {


    if (!al_init()) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

//    const ALLEGRO_PATH *path = al_get_standard_path(ALLEGRO_RESOURCES_PATH);
//    const char *cstrpath = al_path_cstr(path, '/');
//    chdir(cstrpath);
    if (!al_init_image_addon()) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

    if (!al_init_font_addon()) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_font_addon!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }
    if (!al_init_ttf_addon()) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_ttf_addon!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

    display = al_create_display(first_display_width, first_display_height);

    if (!display) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

    image1 = al_load_bitmap("map1.png");
    image2 = al_load_bitmap("map2.png");


    if (!image1 || !image2) {
        al_show_native_message_box(display, "Error", "Error",
                                   "Failed to load image! Image ile executable ı aynı kalsörde çalıştır",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        al_destroy_display(display);
        return 0;
    }
    font = al_load_ttf_font("data/DejaVuSans.ttf", 48, 0);

    if (!font) {
        al_show_native_message_box(display, "Error", "Error", "Fontu yükleyemedik.",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        al_destroy_display(display);
        return 0;
    }


    al_install_mouse();
    queue = al_create_event_queue();
    al_register_event_source(queue, al_get_mouse_event_source());
    al_register_event_source(queue, al_get_display_event_source(display));


    main_draw();

    al_flip_display();
    bool done = 0;
    while (!done) {
        al_wait_for_event(queue, &event);
        switch (event.type) {
            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                done = 1;
                break;
            case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN:
                if (decide_mouse_click_position(event.mouse.x, event.mouse.y)) {
                    done = 1;
                }
                break;
            default:
                break;
        }
    }
    al_destroy_display(display);
    al_destroy_bitmap(image1);
    al_destroy_bitmap(image2);
    al_destroy_font(font);

    return 0;
}

void main_draw() {
    al_draw_scaled_bitmap(image1, 0, 0, 196, 196, map1_start_x, map1_start_y, map_width, map_height, 0);
    al_draw_scaled_bitmap(image2, 0, 0, 196, 196, map2_start_x, map2_start_y, map_width, map_height, 0);
    al_draw_text(font, al_map_rgb(255, 255, 255), 10, 10, ALLEGRO_ALIGN_LEFT, "Lütfen bir harita seçin.");
}

bool decide_mouse_click_position(int x, int y) {
    if (x > map1_start_x && x < map1_start_x + map_width && y > map1_start_y && y < map1_start_x + map_width) {
        printf("1 numaralı image seçildi");
        printf("\n");
        main_draw();
        al_draw_rectangle(map1_start_x, map1_start_y, map1_start_x + map_width, map1_start_y + map_width,
                          al_map_rgb(220, 20, 60), 20);
        al_flip_display();
        al_rest(0.3);
        al_destroy_display(display);
        init_map1_ui();
        return true;
    } else if (x > map2_start_x && x < map2_start_x + map_width && y > map2_start_y && y < map2_start_y + map_height) {
        printf("2 numaralı image seçildi");
        printf("\n");
        main_draw();
        al_draw_rectangle(map2_start_x, map2_start_y, map2_start_x + map_width, map2_start_y + map_width,
                          al_map_rgb(220, 20, 60), 20);
        al_flip_display();
        al_rest(0.3);
        al_destroy_display(display);
        init_map2_ui();
        return true;
    } else {
        return false;
    }
}


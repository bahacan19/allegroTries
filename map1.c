#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <unistd.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/mouse.h>
#include <allegro5/mouse_cursor.h>

const int map1_display_width = 1300;
const int map1_first_display_height = 1000;



ALLEGRO_EVENT_QUEUE *queue1;
ALLEGRO_DISPLAY *display1 = NULL;
ALLEGRO_EVENT event1;
ALLEGRO_FONT *font1;


void init_map1_ui();

void init_map1_ui() {
    display1 = al_create_display(map1_display_width, map1_first_display_height);
    al_install_mouse();
    queue1 = al_create_event_queue();
    al_register_event_source(queue1, al_get_mouse_event_source());
    al_register_event_source(queue1, al_get_display_event_source(display1));


    font1 = al_load_ttf_font("data/DejaVuSans.ttf", 48, 0);
    al_draw_text(font1, al_map_rgb(255, 255, 255), 10, 10, ALLEGRO_ALIGN_LEFT, "Bu ekranda 1 numaralı harita datalarını alacağız.");

    al_flip_display();
    bool done = 0;
    while (!done) {
        al_wait_for_event(queue1, &event1);
        switch (event1.type) {
            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                done = 1;
                break;
            default:
                break;
        }
    }
    al_destroy_font(font1);
}
#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <unistd.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/mouse.h>
#include <allegro5/mouse_cursor.h>

const int map2_display_width = 1300;
const int map2_first_display_height = 1000;



ALLEGRO_EVENT_QUEUE *queue2;
ALLEGRO_DISPLAY *display2 = NULL;
ALLEGRO_EVENT event2;
ALLEGRO_FONT *font;


void init_map2_ui();

void init_map2_ui() {
    display2 = al_create_display(map2_display_width, map2_first_display_height);
    al_install_mouse();
    queue2 = al_create_event_queue();
    al_register_event_source(queue2, al_get_mouse_event_source());
    al_register_event_source(queue2, al_get_display_event_source(display2));


    font = al_load_ttf_font("data/DejaVuSans.ttf", 48, 0);
    al_draw_text(font, al_map_rgb(255, 255, 255), 10, 10, ALLEGRO_ALIGN_LEFT, "Bu ekranda 2 numaralı harita datalarını alacağız.");

    al_flip_display();
    bool done = 0;
    while (!done) {
        al_wait_for_event(queue2, &event2);
        switch (event2.type) {
            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                done = 1;
                break;
            default:
                break;
        }
    }
    al_destroy_font(font);
}
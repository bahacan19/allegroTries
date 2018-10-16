#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

int main() {
    al_init();
    al_init_font_addon();
    al_install_keyboard();
    al_init_ttf_addon();

    ALLEGRO_FONT *font = al_load_ttf_font("data/DejaVuSans.ttf", 48, 0);
    ALLEGRO_DISPLAY *displa = al_create_display(800, 600);

    ALLEGRO_EVENT_QUEUE *q = al_create_event_queue();
    al_register_event_source(q, al_get_keyboard_event_source());
    al_register_event_source(q, al_get_display_event_source(displa));
    ALLEGRO_USTR *str = al_ustr_new("SEÇİM...");
    int pos = (int) al_ustr_size(str);

    bool quit = false;
    while (!quit) {
        al_clear_to_color(al_map_rgb_f(0, 0, 0));
        al_draw_ustr(font, al_map_rgb_f(1, 1, 1), 400, 300, ALLEGRO_ALIGN_CENTRE, str);
        al_flip_display();

        ALLEGRO_EVENT e;
        al_wait_for_event(q, &e);
        switch (e.type) {
            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                quit = true;
                break;
            case ALLEGRO_EVENT_KEY_CHAR:
                if (e.keyboard.unichar >= 32) {
                    if (e.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
                        if (al_ustr_prev(str, &pos))
                            al_ustr_truncate(str, pos);
                    } else {
                        pos += al_ustr_append_chr(str, e.keyboard.unichar);
                    }
                } else if (e.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
                    printf("%s","backslash");
                    if (al_ustr_prev(str, &pos))
                        al_ustr_truncate(str, pos);
                }
                else if (e.keyboard.keycode == ALLEGRO_KEY_ENTER) {
                    quit = true;
                }

                break;

        }
    }
}
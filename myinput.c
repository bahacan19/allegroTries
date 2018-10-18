#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

const char *prefix = "t için yön girin : (G,Ç)";

char *replace_str(char *str, char *orig, char *rep);

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
    ALLEGRO_USTR *str = al_ustr_new(prefix);
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
                        /*if (al_ustr_prev(str, &pos))
                            al_ustr_truncate(str, pos);*/
                    } else {
                        pos += al_ustr_append_chr(str, e.keyboard.unichar);
                    }
                } else if (e.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
                    printf("%s", "backslash");
                    /*if (al_ustr_prev(str, &pos))
                        al_ustr_truncate(str, pos);*/
                } else if (e.keyboard.keycode == ALLEGRO_KEY_ENTER) {
                    printf("%s", replace_str((char *) str->data, (char *) prefix, ""));
                    quit = true;
                }

                break;

        }
    }
    al_ustr_free(str);
}

char *replace_str(char *str, char *orig, char *rep) {
    static char buffer[4096];
    char *p;

    if (!(p = strstr(str, orig)))  // Is 'orig' even in 'str'?
        return str;

    strncpy(buffer, str, p - str); // Copy characters from 'str' start to 'orig' st$
    buffer[p - str] = '\0';

    sprintf(buffer + (p - str), "%s%s", rep, p + strlen(orig));

    return buffer;
}

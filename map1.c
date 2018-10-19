#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <unistd.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/mouse.h>
#include <allegro5/mouse_cursor.h>
#include <locale.h>

const int map1_display_width = 1300;
const int map1_first_display_height = 2000;


ALLEGRO_EVENT_QUEUE *queue1;
ALLEGRO_DISPLAY *display1 = NULL;
ALLEGRO_FONT *font1;

ALLEGRO_BITMAP *image_1 = NULL;

const float image_1_start_x = 50, image_1_start_y = 100;



void init_map1_ui();

char listen_for_input(char *prefix);


void init_map1_ui() {
    display1 = al_create_display(map1_display_width, map1_first_display_height);
    al_install_mouse();
    al_install_keyboard();
    queue1 = al_create_event_queue();
    al_register_event_source(queue1, al_get_mouse_event_source());
    al_register_event_source(queue1, al_get_keyboard_event_source());
    al_register_event_source(queue1, al_get_display_event_source(display1));


    image_1 = al_load_bitmap("map1.png");
    font1 = al_load_ttf_font("data/DejaVuSans.ttf", 48, 0);


    char RESULT1 = listen_for_input("'t' yolu için yön giriniz: (G,C)");
    char RESULT2 = listen_for_input("'x' yolu için yön giriniz: (G,C)");
    char RESULT3 = listen_for_input("'y' yolu için yön giriniz: (G,C)");
    char RESULT4 = listen_for_input("'z' yolu için yön giriniz: (G,C)");

    al_clear_to_color(al_map_rgb_f(0, 0, 0));
    al_draw_scaled_bitmap(image_1, 0, 0, 500, 502, image_1_start_x, image_1_start_y, 500, 500, 0);
    al_draw_textf(font1, al_map_rgb(255, 255, 255), 10, 800, ALLEGRO_ALIGN_LEFT, "%c   %c   %c   %c", RESULT1, RESULT2, RESULT3, RESULT4);
    al_flip_display();

    bool done = 0;
    while (!done) {
        ALLEGRO_EVENT event1;
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
    al_destroy_display(display1);
}

char listen_for_input(char *prefix) {
    size_t prefix_len = strlen(prefix);
    ALLEGRO_USTR *str = al_ustr_new(prefix);
    int pos = (int) al_ustr_size(str);
    bool quit = false;
    char res[1] = "";
    while (!quit) {
        al_clear_to_color(al_map_rgb_f(0, 0, 0));
        al_draw_scaled_bitmap(image_1, 0, 0, 500, 502, image_1_start_x, image_1_start_y, 500, 500, 0);
        al_draw_ustr(font1, al_map_rgb_f(1, 1, 1), image_1_start_x, 700, ALLEGRO_ALIGN_LEFT, str);
        al_flip_display();

        ALLEGRO_EVENT e;
        al_wait_for_event(queue1, &e);
        switch (e.type) {
            case ALLEGRO_EVENT_DISPLAY_CLOSE:
                exit(-1);
                //quit = true;
                //break;
            case ALLEGRO_EVENT_KEY_CHAR:
                if (e.keyboard.unichar >= 32) {
                    if (e.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
                        //printf("%d,%d", prefix_len, str->slen);
                        //printf("\n");
                        if (prefix_len < str->slen) {
                            al_ustr_prev(str, &pos);
                            al_ustr_truncate(str, pos);
                        }
                    } else {
                        if (prefix_len <= str->slen) pos += al_ustr_append_chr(str, e.keyboard.unichar);
                    }
                } else if (e.keyboard.keycode == ALLEGRO_KEY_BACKSPACE) {
                    printf("%s", "backslash");
                    /*if (al_ustr_prev(str, &pos))
                        al_ustr_truncate(str, pos);*/
                } else if (e.keyboard.keycode == ALLEGRO_KEY_ENTER) {
                    //printf("%s", str->data);
                    res[0] = str->data[str->slen - 1]; //son char alıyoruz
                    printf("%s",&res[0]);
                    //res[0] = myReplace(str->data, prefix, "");
                    //resulti = replace_str((char *) str->data, prefix, "");
                    quit = true;
                }
                break;
            default:
                break;
        }
    }
    al_ustr_free(str);
    return res[0];
}

/*
char myReplace(unsigned char *data, char *prefix, char rep[1]) {
    return 0;
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
}*/

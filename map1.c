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
#include <inttypes.h>

const int map1_display_width = 1300;
const int map1_first_display_height = 2000;

ALLEGRO_TIMER *timer = NULL;

ALLEGRO_EVENT_QUEUE *queue1;
ALLEGRO_DISPLAY *display1 = NULL;
ALLEGRO_FONT *font1;

ALLEGRO_BITMAP *image_1 = NULL;
ALLEGRO_BITMAP *arrow = NULL;
const float FPS = 60;

char DIRECT_t;
char DIRECT_x;
const float image_1_start_x = 50, image_1_start_y = 100;


void init_map1_ui();

char listen_for_input(char *prefix, char string1, char string2);


void draw_arrows();

void init_map1_ui() {
    display1 = al_create_display(map1_display_width, map1_first_display_height);
    al_install_mouse();
    al_install_keyboard();
    queue1 = al_create_event_queue();
    al_register_event_source(queue1, al_get_mouse_event_source());
    al_register_event_source(queue1, al_get_keyboard_event_source());
    al_register_event_source(queue1, al_get_display_event_source(display1));

    //timer
    timer = al_create_timer(1.0 / FPS);
    al_register_event_source(queue1, al_get_timer_event_source(timer));
    al_start_timer(timer);


    image_1 = al_load_bitmap("map1.png");
    arrow = al_load_bitmap("arrow.png");
    font1 = al_load_ttf_font("data/DejaVuSans.ttf", 48, 0);


    DIRECT_t = listen_for_input("'t' yolu için yön giriniz: (G,C)", "G"[0], "C"[0]);
    DIRECT_x = listen_for_input("'x' yolu için yön giriniz: (G,C)", "G"[0], "C"[0]);
    char RESULT_y = listen_for_input("'y' yolu için yön giriniz: (G,C)", "G"[0], "C"[0]);
    char RESULT_z = listen_for_input("'z' yolu için yön giriniz: (G,C)", "G"[0], "C"[0]);

    //char RESULT5 = listen_for_input("'a' yolu için yön giriniz: (G,C)", NULL, NULL);
    //char RESULT6 = listen_for_input("'b' yolu için yön giriniz: (G,C)", NULL, NULL);
    //char RESULT7 = listen_for_input("'c' yolu için yön giriniz: (G,C)", NULL, NULL);
    //char RESULT8 = listen_for_input("'d' yolu için yön giriniz: (G,C)", NULL, NULL);

    al_clear_to_color(al_map_rgb_f(0, 0, 0));
    al_draw_scaled_bitmap(image_1, 0, 0, 500, 502, image_1_start_x, image_1_start_y, 500, 500, 0);
    al_draw_textf(font1, al_map_rgb(255, 255, 255), 10, 800, ALLEGRO_ALIGN_LEFT, "%c   %c   %c   %c", DIRECT_t,
                  DIRECT_x, RESULT_y, RESULT_z);
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
    al_destroy_timer(timer);
}


char listen_for_input(char *prefix, char match1, char match2) {
    size_t prefix_len = strlen(prefix);
    ALLEGRO_USTR *str = al_ustr_new(prefix);
    int pos = (int) al_ustr_size(str);
    bool quit = false;
    char res[1] = "";
    while (!quit) {
        ALLEGRO_EVENT e;
        al_wait_for_event(queue1, &e);
        switch (e.type) {
            case ALLEGRO_EVENT_TIMER:
                al_clear_to_color(al_map_rgb_f(0, 0, 0));
                al_draw_scaled_bitmap(image_1, 0, 0, 500, 502, image_1_start_x, image_1_start_y, 500, 500, 0);
                al_draw_ustr(font1, al_map_rgb_f(1, 1, 1), image_1_start_x, 700, ALLEGRO_ALIGN_LEFT, str);
                draw_arrows();

                al_flip_display();
                break;
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
                    if (res[0] == match1 || res[0] == match2) {
                        quit = true;
                    }
                    printf("%s", &res[0]);
                    //res[0] = myReplace(str->data, prefix, "");
                    //resulti = replace_str((char *) str->data, prefix, "");
                }
                break;
            default:
                break;
        }
    }
    al_ustr_free(str);
    return res[0];
}

int t_framer = 0, x_framer = 0;

void draw_arrows() {

    if (DIRECT_t != 0) {
        if (DIRECT_t == "G"[0]) {
            al_draw_bitmap(arrow, 50 + t_framer, 360, 0);
            t_framer += 1;
            if (t_framer > 55) t_framer = 0;
        } else {
            al_draw_rotated_bitmap(arrow, 37.5, 12.5, 90 - t_framer, 360, (float) ALLEGRO_PI, 0);
            t_framer += 1;
            if (t_framer > 55) t_framer = 0;
        }
    }
    if (DIRECT_x != 0) {
        if (DIRECT_x == "G"[0]) {
            al_draw_rotated_bitmap(arrow, 37.5, 12.5, 300, image_1_start_y + x_framer,
                                   (float) (ALLEGRO_PI * -1 * (1.5)), 0);
            x_framer += 1;
            if (x_framer > 55) x_framer = 0;
        } else {
            al_draw_rotated_bitmap(arrow, 37.5, 12.5, 300, image_1_start_y + 55 - x_framer,
                                   (float) (ALLEGRO_PI * -1 * 0.5), 0);
            x_framer += 1;
            if (x_framer > 55) x_framer = 0;
        }
    }

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

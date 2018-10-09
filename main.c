#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>

ALLEGRO_DISPLAY *display = NULL;
ALLEGRO_BITMAP *image1 = NULL;
ALLEGRO_BITMAP *image2 = NULL;
int main() {


    if (!al_init()) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize allegro!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

    if (!al_init_image_addon()) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize al_init_image_addon!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

    display = al_create_display(1600, 1200);

    if (!display) {
        al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        return 0;
    }

    image1 = al_load_bitmap("map1.png");
    image2 = al_load_bitmap("map2.png");

    if (!image1 || !image2) {
        al_show_native_message_box(display, "Error", "Error", "Failed to load image!",
                                   NULL, ALLEGRO_MESSAGEBOX_ERROR);
        al_destroy_display(display);
        return 0;
    }

    //al_draw_bitmap(image,0,0,0);
    //al_draw_bitmap(image1, 0, 0, 0);
    al_draw_scaled_bitmap(image1, 0, 0, 196, 196, 100, 0, 500, 500, 0);
    al_draw_scaled_bitmap(image2, 0, 0, 196, 196, 700, 0, 500, 500, 0);
    //al_draw_bitmap(image2, 300, 0, 0);

    al_flip_display();
    al_rest(20);

    al_destroy_display(display);
    al_destroy_bitmap(image1);

    return 0;
}
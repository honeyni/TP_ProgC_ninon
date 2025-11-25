#include <stdio.h>

struct Couleur {
    unsigned char r;   // Rouge
    unsigned char g;   // Vert
    unsigned char b;   // Bleu
    unsigned char a;   // Alpha
};

int main() {
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0xaa, 0xbb, 0xcc, 0xff},
        {0x01, 0x02, 0x03, 0xff},
        {0xde, 0xad, 0xbe, 0xff},
        {0xff, 0x00, 0x00, 0x80},
        {0x00, 0xff, 0x00, 0x80},
        {0x00, 0x00, 0xff, 0x80},
        {0x7f, 0x7f, 0x7f, 0xff}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n\n", couleurs[i].a);
    }

    return 0;
}

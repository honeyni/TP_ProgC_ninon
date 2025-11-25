#include <stdio.h>

int main() {
    int d = 0x10001000;  // valeur test (change comme tu veux)

    // 4eme bit de gauche  = bit 28
    int bit4gauche  = (d >> 28) & 1;

    // 20eme bit de gauche = bit 12
    int bit20gauche = (d >> 12) & 1;

    // Si les deux bits valent 1 → afficher 1 sinon 0
    if (bit4gauche == 1 && bit20gauche == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

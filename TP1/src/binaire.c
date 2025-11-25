#include <stdio.h>

void afficher_binaire(int n) {
    printf("%d en binaire : ", n);

    // afficher les 32 bits de gauche à droite
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;   // on isole le bit
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    afficher_binaire(0);
    afficher_binaire(1024);
    afficher_binaire(4096);
    afficher_binaire(65535);
    afficher_binaire(65536);

    return 0;
}

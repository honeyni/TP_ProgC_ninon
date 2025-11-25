#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurOcc {
    struct Couleur c;
    int compteur;
};

int couleurs_egales(struct Couleur a, struct Couleur b) {
    return (a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a);
}

int main() {
    struct Couleur tab[100];
    struct CouleurOcc distinctes[100];
    int nb_distinctes = 0;

    srand(time(NULL));

    // --- Remplissage du tableau (100 couleurs aléatoires) ---
    for (int i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = rand() % 256;
    }

    // --- Comptage des couleurs distinctes ---
    for (int i = 0; i < 100; i++) {
        int trouve = 0;

        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tab[i], distinctes[j].c)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }

        if (!trouve) {
            distinctes[nb_distinctes].c = tab[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }

    // --- Affichage des couleurs distinctes ---
    printf("Couleurs distinctes et occurrences :\n\n");

    for (int i = 0; i < nb_distinctes; i++) {
        printf("R:%02x G:%02x B:%02x A:%02x  →  %d occurrences\n",
               distinctes[i].c.r,
               distinctes[i].c.g,
               distinctes[i].c.b,
               distinctes[i].c.a,
               distinctes[i].compteur);
    }

    return 0;
}

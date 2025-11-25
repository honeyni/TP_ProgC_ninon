#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int min, max;

    srand(time(NULL));  // initialisation du générateur aléatoire

    // Remplissage du tableau
    for (int i = 0; i < 100; i++) {
        tab[i] = (rand() % 1000) + 1;  // entre 1 et 1000
    }

    // Initialiser min et max avec le premier élément
    min = tab[0];
    max = tab[0];

    // Trouver min et max
    for (int i = 1; i < 100; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    printf("Le numero le plus petit est : %d\n", min);
    printf("Le numero le plus grand est : %d\n", max);

    return 0;
}

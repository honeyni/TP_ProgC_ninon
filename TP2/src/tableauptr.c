#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t_int[11];
    float t_float[11];

    int *p_int;
    float *p_float;

    srand(time(NULL));

    // Remplissage des tableaux AVEC pointeurs
    p_int = t_int;
    p_float = t_float;

    for (int i = 0; i < 11; i++) {
        *(p_int + i) = rand() % 200;               // valeur aléatoire int
        *(p_float + i) = (rand() % 1000) / 100.0f; // valeur aléatoire float
    }

    // Affichage AVANT
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de floats (avant) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n\n");

    // Multiplication par 3 aux indices pairs (0, 2, 4, ...)
    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0) {        // indice divisible par 2
            *(p_int + i) *= 3;
            *(p_float + i) *= 3;
        }
    }

    // Affichage APRES
    printf("Tableau d'entiers (apres) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de floats (apres) :\n");
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n");

    return 0;
}

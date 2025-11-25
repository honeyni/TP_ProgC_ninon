#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];

    srand(time(NULL));

    // Remplissage du tableau
    for (int i = 0; i < 100; i++) {
        tab[i] = (rand() % 2001) - 1000; // nombres aléatoires entre -1000 et 1000
    }

    // Affichage AVANT tri
    printf("Tableau non trie :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Tri à bulles (bubble sort)
    for (int i = 0; i < 100 - 1; i++) {
        for (int j = 0; j < 100 - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // Affichage APRES tri
    printf("Tableau trie par ordre croissant :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

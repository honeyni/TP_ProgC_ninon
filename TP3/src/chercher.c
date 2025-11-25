#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int valeur, trouve = 0;

    srand(time(NULL)); // initialisation de rand()

    // Remplissage du tableau
    for (int i = 0; i < 100; i++) {
        tab[i] = (rand() % 2001) - 1000; // valeurs entre -1000 et 1000
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche
    for (int i = 0; i < 100; i++) {
        if (tab[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    // Résultat
    if (trouve)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}

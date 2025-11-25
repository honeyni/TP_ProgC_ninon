#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int valeur;
    int debut, fin, milieu;
    int trouve = 0;

    srand(time(NULL));

    // --- Création d'un tableau trié ---
    tab[0] = (rand() % 10); // première valeur
    for (int i = 1; i < 100; i++) {
        tab[i] = tab[i - 1] + (rand() % 10); // toujours plus grand que le précédent
    }

    // --- Affichage du tableau trié ---
    printf("Tableau trie :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // --- Lecture de l'entier à chercher ---
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // --- Recherche dichotomique ---
    debut = 0;
    fin = 99;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tab[milieu] == valeur) {
            trouve = 1;
            break;
        }
        else if (tab[milieu] < valeur) {
            debut = milieu + 1;   // chercher à droite
        }
        else {
            fin = milieu - 1;     // chercher à gauche
        }
    }

    // --- Résultat ---
    if (trouve)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}

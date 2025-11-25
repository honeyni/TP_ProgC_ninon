#include <stdio.h>
#include <string.h>
#include "fichier.h"

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[150];
    float note1;
    float note2;
};

int main() {
    struct Etudiant tab[5];
    char ligne[400];

    printf("=== Saisie de la base de donnees etudiante ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\nEntrez les details de l'etudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf("%49s", tab[i].nom);
        getchar();

        printf("Prenom : ");
        scanf("%49s", tab[i].prenom);
        getchar();

        printf("Adresse : ");
        fgets(tab[i].adresse, sizeof(tab[i].adresse), stdin);
        tab[i].adresse[strcspn(tab[i].adresse, "\n")] = 0;

        printf("Note 1 : ");
        scanf("%f", &tab[i].note1);

        printf("Note 2 : ");
        scanf("%f", &tab[i].note2);
        getchar();

        sprintf(ligne, "%s %s | %s | %.2f | %.2f",
                tab[i].nom,
                tab[i].prenom,
                tab[i].adresse,
                tab[i].note1,
                tab[i].note2);

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("\nLes informations ont ete enregistrees dans etudiant.txt\n");

    return 0;
}

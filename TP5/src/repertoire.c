#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "repertoire.h"

void lire_dossier_iteratif(const char *nom_dossier) {
    // Pile de chemins à explorer
    char pile[1000][1024];
    int sommet = 0;

    // On met le dossier initial dans la pile
    strcpy(pile[sommet++], nom_dossier);

    printf("Parcours iteratif du dossier : %s\n\n", nom_dossier);

    // Tant qu’il reste des dossiers à parcourir
    while (sommet > 0) {
        // Retirer un dossier de la pile
        sommet--;
        char dossier_actuel[1024];
        strcpy(dossier_actuel, pile[sommet]);

        printf("Contenu de : %s\n", dossier_actuel);

        DIR *dir = opendir(dossier_actuel);
        if (!dir) {
            printf("  [Impossible d'ouvrir]\n\n");
            continue;
        }

        struct dirent *entree;

        while ((entree = readdir(dir)) != NULL) {
            // ignorer . et ..
            if (strcmp(entree->d_name, ".") == 0 ||
                strcmp(entree->d_name, "..") == 0) {
                continue;
            }

            char chemin[1024];
            snprintf(chemin, sizeof(chemin), "%s/%s",
                     dossier_actuel, entree->d_name);

            printf("  - %s\n", entree->d_name);

            // Vérifier si c’est un répertoire → on l’ajoute dans la pile
            struct stat st;
            if (stat(chemin, &st) == 0 && S_ISDIR(st.st_mode)) {
                strcpy(pile[sommet++], chemin);
            }
        }

        printf("\n");
        closedir(dir);
    }
}

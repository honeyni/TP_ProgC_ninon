/********************* repertoire.h *********************/
#ifndef REPERTOIRE_H
#define REPERTOIRE_H

void lire_dossier(const char *nom_dossier);
void lire_dossier_recursif(const char *nom_dossier);

#endif
/********************************************************/


/********************* repertoire.c *********************/
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "repertoire.h"

void lire_dossier(const char *nom_dossier) {
    DIR *dir;
    struct dirent *entree;

    dir = opendir(nom_dossier);
    if (dir == NULL) {
        printf("Erreur : impossible d'ouvrir le dossier %s\n", nom_dossier);
        return;
    }

    printf("Contenu du dossier %s :\n", nom_dossier);

    while ((entree = readdir(dir)) != NULL) {
        printf("- %s\n", entree->d_name);
    }

    closedir(dir);
}

/* helper récursif, niveau sert juste pour l'indentation visuelle */
static void lire_dossier_recursif_interne(const char *nom_dossier, int niveau) {
    DIR *dir;
    struct dirent *entree;
    dir = opendir(nnom_dossier);
    if (dir == NULL) {
        printf("Erreur : impossible d'ouvrir le dossier %s\n", nom_dossier);
        return;
    }

    while ((entree = readdir(dir)) != NULL) {
        if (strcmp(entree->d_name, ".") == 0 || strcmp(entree->d_name, "..") == 0) {
            continue;  // évite boucle infinie
        }

        char chemin[1024];
        snprintf(chemin, sizeof(chemin), "%s/%s", nom_dossier, entree->d_name);

        for (int i = 0; i < niveau; i++) {
            printf("  ");  // indentation
        }
        printf("- %s\n", entree->d_name);

        struct stat st;
        if (stat(chemin, &st) == 0 && S_ISDIR(st.st_mode)) {
            lire_dossier_recursif_interne(chemin, niveau + 1);
        }
    }

    closedir(dir);
}

void lire_dossier_recursif(const char *nom_dossier) {
    printf("Parcours recursif de %s :\n", nom_dossier);
    lire_dossier_recursif_interne(nom_dossier, 0);
}
/********************************************************/


/************* repertoire_recursif_main.c ***************/
#include <stdio.h>
#include "repertoire.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    char *nom_repertoire = argv[1];
    lire_dossier_recursif(nom_repertoire);

    return 0;
}
/********************************************************/

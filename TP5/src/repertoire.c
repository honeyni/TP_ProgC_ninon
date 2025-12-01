#include <stdio.h>
#include <dirent.h>
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

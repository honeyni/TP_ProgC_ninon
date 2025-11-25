#include <stdio.h>
#include <string.h>

// Fonction qui compte combien de fois "mot" apparaît dans "ligne"
int compter_occurrences(const char *ligne, const char *mot) {
    int count = 0;
    int len_mot = strlen(mot);

    if (len_mot == 0) return 0;

    const char *p = ligne;

    while ((p = strstr(p, mot)) != NULL) {
        count++;
        p += len_mot; // avancer pour éviter boucle infinie
    }

    return count;
}

int main() {
    char nom_fichier[200];
    char recherche[200];
    char ligne[500];
    FILE *f;

    // --- Nom du fichier ---
    printf("Entrez le nom du fichier : ");
    fgets(nom_fichier, sizeof(nom_fichier), stdin);
    nom_fichier[strcspn(nom_fichier, "\n")] = 0;

    // Ouvrir le fichier
    f = fopen(nom_fichier, "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir %s\n", nom_fichier);
        return 1;
    }

    // --- Phrase à rechercher ---
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    fgets(recherche, sizeof(recherche), stdin);
    recherche[strcspn(recherche, "\n")] = 0;

    printf("\nRésultats de la recherche :\n");

    int num_ligne = 1;
    int trouve_quelque_chose = 0;

    // Lire le fichier ligne par ligne
    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        int n = compter_occurrences(ligne, recherche);

        if (n > 0) {
            printf("Ligne %d : %d fois\n", num_ligne, n);
            trouve_quelque_chose = 1;
        }

        num_ligne++;
    }

    if (!trouve_quelque_chose) {
        printf("Aucune occurrence trouvee.\n");
    }

    fclose(f);
    return 0;
}

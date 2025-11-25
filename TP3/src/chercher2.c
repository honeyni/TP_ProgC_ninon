#include <stdio.h>

int comparer(const char *a, const char *b) {
    int i = 0;

    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0; // différences -> pas égal
        }
        i++;
    }

    return 1; // identiques
}

int main() {
    char phrases[10][200] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[200];
    int trouve = 0;

    printf("Entrez la phrase a chercher : ");
    fgets(recherche, sizeof(recherche), stdin);

    // enlever \n si présent
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche
    for (int p = 0; p < 10; p++) {
        if (comparer(recherche, phrases[p])) {
            trouve = 1;
            break;
        }
    }

    if (trouve)
        printf("Phrase trouvee\n");
    else
        printf("Phrase non trouvee\n");

    return 0;
}

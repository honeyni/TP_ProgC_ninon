#include <stdio.h>

// Fonction récursive qui calcule la factorielle
int factorielle(int num) {
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } else {
        int valeur = num * factorielle(num - 1);  // récursion
        printf("fact(%d): %d\n", num, valeur);    // affiche étape
        return valeur;
    }
}

int main() {
    int tests[] = {0, 1, 3, 5, 7};
    int taille = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < taille; i++

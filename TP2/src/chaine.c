#include <stdio.h>

int main() {
    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0;
    int longueur = 0;

    // -----------------------------
    // 1) Calcul de la longueur
    // -----------------------------
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de chaine1 = %d\n", longueur);

    // -----------------------------
    // 2) Copie de chaine1 → copie
    // -----------------------------
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; // fin de chaîne

    printf("Copie = %s\n", copie);

    // -----------------------------
    // 3) Concaténation : chaine1 + chaine2
    // -----------------------------
    // d'abord, mettre chaine1 dans concat
    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    // puis ajouter chaine2 à la suite
    int j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Concatenation = %s\n", concat);

    return 0;
}

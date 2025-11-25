#include <stdio.h>

int main() {
    int n = 5;   // hauteur de la pyramide
    int i, j;

    for (i = 1; i <= n; i++) {

        // espaces pour centrer
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // nombres qui montent : 1 → i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // nombres qui descendent : (i-1) → 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // ligne suivante
    }

    printf("Pyramide terminee.\n");

    return 0;
}


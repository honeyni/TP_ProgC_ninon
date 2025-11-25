#include <stdio.h>

int main() {
    int n;
    int u0 = 0;
    int u1 = 1;
    int suivant;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n doit etre positif.\n");
        return 1;
    }

    // U0
    printf("%d", u0);

    if (n >= 1) {
        // U1
        printf(", %d", u1);
    }

    // Calcul des termes suivants
    for (int i = 2; i <= n; i++) {
        suivant = u0 + u1;

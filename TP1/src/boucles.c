#include <stdio.h>

int main() {
    int compteur = 5;  // change cette valeur pour tester (doit être < 10)

    if (compteur >= 10) {
        printf("La valeur doit etre strictement inferieure a 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            if (i == 3 || i == 4) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}

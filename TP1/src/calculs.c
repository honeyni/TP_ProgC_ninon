#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 4;
    char op = '+';   // change la valeur pour tester : + - * / % & | ~

    int resultat;

    switch (op) {

        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zero\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zero\n");
            }
            break;

        case '&':
            resultat = num1 & num2;   // opérateur ET bit-à-bit
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;   // opérateur OU bit-à-bit
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            // l’opérateur ~ s’applique sur un seul nombre
            resultat = ~num1;
            printf("~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Operateur inconnu.\n");
    }

    return 0;
}



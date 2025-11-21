#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    printf("Addition : a + b = %d\n", a + b);
    printf("Soustraction : a - b = %d\n", a - b);
    printf("Multiplication : a * b = %d\n", a * b);
    printf("Division : a / b = %d\n", a / b);   // division entière
    printf("Modulo : a %% b = %d\n", a % b);

    printf("a == b ? %d\n", a == b);     // 1 = vrai, 0 = faux
    printf("a > b ? %d\n", a > b);       // 1 = vrai, 0 = faux

    return 0;
}

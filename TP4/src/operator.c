#include "operator.h"

int somme(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int produit(int a, int b) {
    return a * b;
}

int quotient(int a, int b) {
    if (b == 0) return 0;  
    return a / b;
}

int modulo(int a, int b) {
    if (b == 0) return 0;
    return a % b;
}

int et_binaire(int a, int b) {
    return a & b;
}

int ou_binaire(int a, int b) {
    return a | b;
}

int negation(int a, int b) {
    return ~a;  // b ignoré (comme un vrai opérateur unaire)
}

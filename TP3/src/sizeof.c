#include <stdio.h>

int main() {

    printf("La taille de int est : %zu octets\n", sizeof(int));
    printf("La taille de int* est : %zu octets\n", sizeof(int*));
    printf("La taille de int** est : %zu octets\n", sizeof(int**));

    printf("La taille de char est : %zu octets\n", sizeof(char));
    printf("La taille de char* est : %zu octets\n", sizeof(char*));
    printf("La taille de char** est : %zu octets\n", sizeof(char**));
    printf("La taille de char*** est : %zu octets\n", sizeof(char***));

    printf("La taille de float est : %zu octets\n", sizeof(float));
    printf("La taille de float* est : %zu octets\n", sizeof(float*));
    printf("La taille de float** est : %zu octets\n", sizeof(float**));
    printf("La taille de float*** est : %zu octets\n", sizeof(float***));

    printf("La taille de double est : %zu octets\n", sizeof(double));
    printf("La taille de double* est : %zu octets\n", sizeof(double*));
    printf("La taille de double** est : %zu octets\n", sizeof(double**));

    printf("La taille de long int est : %zu octets\n", sizeof(long int));
    printf("La taille de long int* est : %zu octets\n", sizeof(long int*));

    printf("La taille de long long int est : %zu octets\n", sizeof(long long int));
    printf("La taille de long long int* est : %zu octets\n", sizeof(long long int*));

    return 0;
}

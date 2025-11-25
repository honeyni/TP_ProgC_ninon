#include <stdio.h>
#include <stdint.h>   // pour uint32_t, uint64_t

int main() {
    // Variables de base
    char c = 'A';
    short s = 1234;
    int i = 123456;
    long int li = 1234567890L;
    long long int lli = 9876543210LL;
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.234567890123456789L;

    // Pointeurs vers ces variables
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("===== AVANT MANIPULATION =====\n");

    printf("Adresse c  : %p | Valeur : 0x%x\n", (void*)pc, (unsigned char)c);
    printf("Adresse s  : %p | Valeur : 0x%x\n", (void*)ps, (unsigned short)s);
    printf("Adresse i  : %p | Valeur : 0x%x\n", (void*)pi, (unsigned int)i);
    printf("Adresse li : %p | Valeur : 0x%lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse lli: %p | Valeur : 0x%llx\n", (void*)plli, (unsigned long long)lli);

    // Pour float et double : affichage hex via memcpy
    uint32_t f_hex;
    uint64_t d_hex;
    memcpy(&f_hex, &f, sizeof(float));
    memcpy(&d_hex, &d, sizeof(double));
    printf("Adresse f  : %p | Valeur : 0x%x\n", (void*)pf, f_hex);
    printf("Adresse d  : %p | Valeur : 0x%llx\n", (void*)pd, d_hex);

    // Pour long double (taille dépend du système)
    unsigned char ld_bytes[16];
    memcpy(ld_bytes, &ld, sizeof(ld_bytes));
    printf("Adresse ld : %p | Valeur : 0x", (void*)pld);
    for (int k = 0; k < 16; k++) printf("%02x", ld_bytes[k]);
    printf("\n");

    // ---------------------------
    // Manipulation via pointeurs
    // ---------------------------
    *pc = 'Z';
    *ps = s - 1;
    *pi = i - 1;
    *pli = li - 1;
    *plli = lli - 1;
    *pf = 1.0f;
    *pd = 3.0;
    *pld = 2.0;

    printf("\n===== APRES MANIPULATION =====\n");

    printf("Adresse c  : %p | Valeur : 0x%x\n", (void*)pc, (unsigned char)c);
    printf("Adresse s  : %p | Valeur : 0x%x\n", (void*)ps, (unsigned short)s);
    printf("Adresse i  : %p | Valeur : 0x%x\n", (void*)pi, (unsigned int)i);
    printf("Adresse li : %p | Valeur : 0x%lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse lli: %p | Valeur : 0x%llx\n", (void*)plli, (unsigned long long)lli);

    memcpy(&f_hex, &f, sizeof(float));
    memcpy(&d_hex, &d, sizeof(double));
    printf("Adresse f  : %p | Valeur : 0x%x\n", (void*)pf, f_hex);
    printf("Adresse d  : %p | Valeur : 0x%llx\n", (void*)pd, d_hex);

    memcpy(ld_bytes, &ld, sizeof(ld_bytes));
    printf("Adresse ld : %p | Valeur : 0x", (void*)pld);
    for (int k = 0; k < 16; k++) printf("%02x", ld_bytes[k]);
    printf("\n");

    return 0;
}

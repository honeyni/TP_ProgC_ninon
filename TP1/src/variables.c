#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    short s = -1234;
    unsigned short us = 50000;

    int i = -123456;
    unsigned int ui = 4000000000U;

    long int li = -1234567890L;
    unsigned long int uli = 3000000000UL;

    long long int lli = -9876543210LL;
    unsigned long long int ulli = 18446744073709551615ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.234567890123456789L;

    printf("char = %c\n", c);
    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("short = %hd\n", s);
    printf("unsigned short = %hu\n", us);

    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);

    printf("long int = %ld\n", li);
    printf("unsigned long int = %lu\n", uli);

    printf("long long int = %lld\n", lli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("float = %f\n", f);
    printf("double = %f\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}

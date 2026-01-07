#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("\n");

    int a = 10, *Pa = NULL;
    float b = 15, *Pb = NULL;
    char c = 'F', *Pc = NULL;

    Pa = &a;
    Pb = &b;
    Pc = &c;

    printf("a = %d\nb = %2.f\nc = %c\n", *Pa, *Pb, *Pc);

    printf("\n");

    *Pa = 20;
    *Pb = 30;
    *Pc = 'G';

    printf("a = %d\nb = %2.f\nc = %c\n", a, b, c);

    printf("\n");



    return 0;
}
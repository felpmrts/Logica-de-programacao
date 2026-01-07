#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    int *Pa = NULL;
    int *Pb = NULL;

    Pa = &a;
    Pb = &b;

    if(Pa > Pb) {
        printf("O Pa eh maior: %u : Seu conteúdo: %d\n", Pa, *Pa);
    } else {
        printf("O Pb eh maior: %u : Seu conteúdo: %d\n", Pb, *Pb);
    };

    return 0;
}
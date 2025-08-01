#include <stdio.h>

int main() {

    long long numero, dobro, quadrado;

    scanf("%lld", &numero);

    dobro = numero * 2;
    quadrado = numero * numero;

    printf("%lld\n", dobro);
    printf("%lld\n", quadrado);

    return 0;
}
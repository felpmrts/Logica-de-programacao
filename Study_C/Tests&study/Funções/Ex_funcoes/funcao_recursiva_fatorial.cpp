#include <stdio.h>
#include <stdlib.h>

int fatorial(int x) {

    int fat;

    if(x == 0 || x == 1) {
        return 1;
    } else {
        return (fat = x * fatorial(x-1));
    }

}

int main() {

    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d eh: %d\n", numero, resultado);

    return 0;
}
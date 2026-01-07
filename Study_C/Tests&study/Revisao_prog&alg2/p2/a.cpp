#include <stdio.h>

int eh_par(int numero) {

    if(numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = eh_par(numero);

    if(resultado == 1) {
        printf("O número digitado eh par!\n");
    } else {
        printf("O número digitado eh impar!\n");
    }

    return 0;
}
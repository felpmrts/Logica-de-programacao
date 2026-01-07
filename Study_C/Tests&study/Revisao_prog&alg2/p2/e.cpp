#include <stdio.h>

int soma_vetores(int *p, int quant) {

    int soma = 0;

    for(int i = 0; i < quant; i++) {
        soma = soma + (*p);
        p++;
    }

    return soma;
}

int main() {

    int vet[] = {10, 20, 30, 40, 50}; //uma lista aleatória
    int *p = vet;
    int soma;

    soma = soma_vetores(p, 5);

    printf("A soma dos elementos do vetor é: %d\n", soma);


    return 0;
}
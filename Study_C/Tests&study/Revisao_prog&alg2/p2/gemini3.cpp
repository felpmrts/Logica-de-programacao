#include <stdio.h>

int soma_positivos(int *p, int tam) {

    int soma_atual = 0;

    if(tam == 0) {
        return 0;
    } else {

        if(*p > 0 && *p % 2 == 0) {
            soma_atual = soma_atual + (*p);
        }

        return soma_atual + soma_positivos(p+1, tam - 1);
    }
  
}

int main() {

    int vetor[] = {4, -2, -5, 7,-9, 6};
    int soma;

    soma = soma_positivos(vetor, 6);

    printf("A soma dos elementos positivos do vetor eh: %d\n", soma);

    return 0;
}
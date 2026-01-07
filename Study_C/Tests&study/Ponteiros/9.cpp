#include <stdio.h>

int main() {

    // Exercício 9.A
    int vetor[] = {6, 2, 1, -7, 9, 4};

    int *p;
    p = vetor;

    int *k;
    k = vetor;

    for(p = vetor; p <= vetor + 5; p++) {
        if(*(p) < *(k)) {
            k = p;
        }
    }

    printf("Ex A:\nO menor valor eh: %d\n\n", *(k));

    // Exercício 9.B

    int soma = 0;
    float media = 0;
    for(p = vetor; p <= vetor + 5; p++) {
        soma = soma + *(p);
    }

    media = ((float)soma) / 6;

    printf("Ex B:\nA media soma eh: %d | A media eh: %.1f\n\n", soma, media);

    // Exercícios 9.C

    int j = 0;
    for(p = vetor; p <= vetor + 5; p++) {
        if(*(p) < 0) {
            j++;
        }
    }

    printf("Ex C:\nO numeros de elemntos negativos eh: %d\n\n", j);

    // Exercícios 9.D

    printf("Ex D:\nOs elementos em ordem invertida sao: ");
    for(p = vetor + 5; p >= vetor; p--) {
        printf("%d ", *(p));
    }
    printf("\n\n");

    // Exercício 9.E

    printf("Ex E:\n");
    int M = 0;
    for(p = vetor; p <= vetor + 5; p++) {
        printf("A posição do vetor[%d] tem %lu bytes alocados\n", M, sizeof(*(p)));
        M++;
    }
    printf("\n\n");


    return 0;
}
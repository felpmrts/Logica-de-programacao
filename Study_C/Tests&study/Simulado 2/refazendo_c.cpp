#include <stdio.h>

int main() {

    int linha, coluna, input;
    
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &input);

    int m[input][input];

    printf("Digite os elementos da matriz:\n");
    for(linha = 0; linha < input; linha++) {
        for(coluna = 0; coluna < input; coluna++) {
            scanf("%d", &m[linha][coluna]);
        }
    }

    printf("\nMatriz completa:\n");
    for(linha = 0; linha < input; linha++) {
        for(coluna = 0; coluna < input; coluna++) {
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }

    int somaImpares = 0; 
    
    printf("\nElementos impares da diagonal secundaria: ");

    for(linha = 0; linha < input; linha++) {
        
        coluna = (input - 1) - linha;
        int elementoAtual = m[linha][coluna];

        if (elementoAtual % 2 != 0) {
            somaImpares += elementoAtual; 
        }
    }

    printf("\nA soma dos numeros impares da diagonal secundaria e: %d\n", somaImpares);

    return 0;
}
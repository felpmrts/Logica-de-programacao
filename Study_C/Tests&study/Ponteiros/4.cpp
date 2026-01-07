#include <stdio.h>

int main() {

    int linha, coluna;
    float matriz[3][3];

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {

            float *pointer_matriz = NULL;
            pointer_matriz = &matriz[linha][coluna];

            printf("%p ", pointer_matriz);
        }
        printf("\n");
    }

    return 0;
}
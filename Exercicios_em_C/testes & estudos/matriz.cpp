#include <stdio.h>

int main() {

    int linha, coluna, i;
    int m[3][3];

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            scanf("%d", &m[linha][coluna]);
        }
    }

    for(linha = 0; linha < 3; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("%d ", m[linha][coluna]);
        }

        printf("\n");
    }


    return 0;
} 

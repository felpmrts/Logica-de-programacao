#include <stdio.h>

#define l 2
#define c 2

int main() {

    int linha, coluna, tabuleiro[l][c] = {{1, 2}, {3, 4}};

    for(linha = 0; linha < 2; linha++) {
        for(coluna = 0; coluna < 2; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}

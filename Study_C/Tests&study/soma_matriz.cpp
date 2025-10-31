#include <stdio.h>

#define l 3
#define c 3

int main() {

    int linha, coluna, a[l][c], b[l][c], z[l][c], i, j;

    for(linha = 0; linha < l; linha++) {
        for(coluna = 0; coluna < c; coluna++) {
            scanf("%d", &a[linha][coluna]);
        }
    }

    for(linha = 0; linha < l; linha++) {
        for(coluna = 0; coluna < c; coluna++) {
            scanf("%d", &b[linha][coluna]);
        }
    }

    for(linha = 0; linha < l; linha++) {
        for(coluna = 0; coluna < c; coluna++) {
            z[linha][coluna] = a[linha][coluna] + b[linha][coluna];
        }
        
    }

    for(linha = 0; linha < l; linha++) {
        for(coluna = 0; coluna < c; coluna++) {

            if(linha < 3 && coluna < 2) {
                printf("%d ", z[linha][coluna]);
            } else {
                printf("%d", z[linha][coluna]);
            }
            
            
        }

        printf("\n");
    }

    return 0;
}
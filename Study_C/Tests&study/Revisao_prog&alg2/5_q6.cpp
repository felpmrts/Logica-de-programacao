#include <stdio.h>

#define l 2
#define c 2

int main() {

    int pontos[l][c] = {{10, 5}, {20,8}};

    for(int linha = 0; linha < 2; linha++) {
        for(int coluna = 0; coluna < 2; coluna++) {
            printf("%d ", pontos[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
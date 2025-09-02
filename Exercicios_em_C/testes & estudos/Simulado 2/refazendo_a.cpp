#include <stdio.h>

int main() {

    int linha, coluna, input;
    int m[linha][coluna];

    scanf("%d", &input);

    for(linha = 0; linha < input; linha++) {
        for(coluna = 0; coluna < input; coluna++) {
            
            if(linha == coluna){
                if(linha < input && coluna < input - 1) {
                    printf("1 ");
                } else {
                    printf("1");
                }

            } else {
                if(linha < input && coluna < input - 1) {
                    printf("0 ");
                } else {
                    printf("0");
                }

            }

        }
        printf("\n");
    }

    return 0;
}
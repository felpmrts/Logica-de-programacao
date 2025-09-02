#include <stdio.h>

int main() {
    
    int G;           // Variável para armazenar a entrada do usuário
    int combinacoes; // Variável para armazenar o total de linhas (2^G)
    int i;           // Variável de controle do loop principal (linhas)
    int j;           // Variável de controle do loop interno (colunas/bits)
    int bit;         // Variável para armazenar o bit (0 or 1) calculado

    scanf("%d", &G);

    combinacoes = 1 << G;

    for (i = 0; i < combinacoes; i++) {
        
        for (j = G - 1; j >= 0; j--) {

            bit = (i >> j) & 1;

            printf("%d", bit);
        }
        
        printf("\n");
    }

    return 0;
}
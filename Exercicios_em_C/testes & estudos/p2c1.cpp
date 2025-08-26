#include <stdio.h>

int main() {

    long long int input, linha, coluna;

    scanf("%lld", &input);

    if(input >= 1 && input <= 100) {

    long long int m[input][input];

    for(linha = 0; linha < input; linha++) {
        for(coluna = 0; coluna < input; coluna++) {
            scanf("%lld", &m[linha][coluna]);
        }
    }

    long long int soma_impar = 0;

    for(linha = 0; linha < input; linha++) {
        
        coluna = (input - 1) - linha;
        long long int elemento_atual = m[linha][coluna];

        if(elemento_atual % 2 != 0) {
            soma_impar = soma_impar + elemento_atual;
        }

    }

    printf("%lld\n", soma_impar);

    }

    return 0;
}
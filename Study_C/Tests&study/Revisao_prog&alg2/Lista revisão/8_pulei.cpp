#include <stdio.h>

int main() {

    int repeticoes;
    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &repeticoes);

    for(int i = 1; i <= repeticoes; i++) {
        int aux, valor;
        printf("--- Repetição %d de %d ---\n", i, repeticoes);
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        aux = valor - 1;

        int fatorial = 0;
        for(aux; aux >= 0; aux--) {
            fatorial = fatorial + valor * aux;
        }

        printf("Valor: %d | Fatorial: %d\n", valor, fatorial);
    }

    return 0;
}
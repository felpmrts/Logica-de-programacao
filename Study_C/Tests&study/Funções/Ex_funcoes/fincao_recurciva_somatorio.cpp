#include <stdio.h>

int somatorio(int x) {

    if(x == 1) {
        return 1;
    } else {
        return (x + somatorio(x-1));
    }

}

int main() {

    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = somatorio(numero);

    printf("O soamtorio de %d eh: %d\n", numero, resultado);

    return 0;
}
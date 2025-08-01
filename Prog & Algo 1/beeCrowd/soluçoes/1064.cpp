#include <stdio.h>

int main() {

    double valor;
    int contador_positivo = 0;
    int i;
    double soma = 0; 

    for(i = 0; i < 6; i++) {

        scanf("%lf", &valor);

        if(valor > 0) {
            contador_positivo++;
            soma = soma + valor;
        }

    }

    printf("%d valores positivos\n", contador_positivo);
    printf("%.1lf\n", soma/contador_positivo);
    

    return 0;
}
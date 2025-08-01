#include <stdio.h>

int main() {

    double valor;
    int contador_positivos = 0;
    int i;

    for (i = 0; i < 6; i++) {

        scanf("%lf", &valor);

        if(valor > 0) {
            contador_positivos = contador_positivos + 1;
        }

    }

    printf("%d valores positivos\n", contador_positivos);
    

    return 0;
}
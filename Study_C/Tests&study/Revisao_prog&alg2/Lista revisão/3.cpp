#include <stdio.h>

int main() {

    float custo_fabrica, custo_total;
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custo_fabrica);

    custo_total = custo_fabrica + ((0.28 * custo_fabrica) + (0.45 * custo_fabrica));

    printf("O custo ao consumidor será: %.2f\n", custo_total);

    return 0;
}
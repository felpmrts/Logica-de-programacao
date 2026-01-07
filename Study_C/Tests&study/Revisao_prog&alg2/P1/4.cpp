#include <stdio.h>

int main() {

    float preco_litro_gasolina, valor_pagamento, quant_litros;

    printf("Valor da litro da gasolina: ");
    scanf("%f", &preco_litro_gasolina);

    printf("Valor do pagamento: ");
    scanf("%f", &valor_pagamento);

    quant_litros = valor_pagamento / preco_litro_gasolina;

    printf("A quantidade de litros no tanque eh: %.2f\n", quant_litros);

    return 0;
}
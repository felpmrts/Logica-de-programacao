#include <stdio.h>

int main() {

    int quant_frango, gasto_aneis;

    printf("Digite quantos frangos tem: ");
    scanf("%d", &quant_frango);

    gasto_aneis = 4 * quant_frango + 7 * quant_frango;

    printf("O gasto total para identificar todos os frangos é R$: %d\n", gasto_aneis);

    return 0;
}
#include <stdio.h> 
#include <stdlib.h>

int main () {

    // o final x de cada variável é direcionado para a peça x
    // o final y de cada variável é direcionado para a peça y
    int codigox, quantidadex, codigoy, quantidadey;
    double valorpx, valorpy;

    scanf("%d %d %lf", &codigox, &quantidadex, &valorpx);
    scanf("%d %d %lf", &codigoy, &quantidadey, &valorpy);
   
    double total = (quantidadex * valorpx) + (quantidadey * valorpy);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
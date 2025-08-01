#include <stdio.h> 
#include <stdlib.h>

int main () {


    char nome;
    double salario, vendas;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    double montante = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", montante);


    return 0;
}
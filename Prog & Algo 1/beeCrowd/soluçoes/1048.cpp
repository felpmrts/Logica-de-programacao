#include <stdio.h>

int main() {

    double so, sf, reajuste; 

    scanf("%lf", &so);

    if (so <= 400.00) {
        reajuste = (so * 1.15);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - so);
        printf("Em percentual: 15 %\n");
    } else if (so >= 400.01 && so <= 800.00) {
        reajuste = (so * 1.12);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - so);
        printf("Em percentual: 12 %\n");
    } else if (so >= 800.01 && so <= 1200.00) {
        reajuste = (so * 1.10);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - so);
        printf("Em percentual: 10 %\n");
    } else if (so >= 1200.01 && so <= 2000.00) {
        reajuste = (so * 1.07);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - so);
        printf("Em percentual: 7 %\n");
    } else {
        reajuste = (so * 1.04);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - so);
        printf("Em percentual: 4 %\n");
    }

    return 0;
}
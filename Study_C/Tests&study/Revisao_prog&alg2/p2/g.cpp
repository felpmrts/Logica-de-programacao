#include <stdio.h>

int pow(int base, int expoente) {

    int resultado;

    if(expoente == 0) {
        return 1;
    } else {
        return resultado = base * pow(base, expoente - 1);
    } 

}

int main() {

    int base, expoente, resultado;

    printf("base: ");
    scanf("%d", &base);

    printf("expoente: ");
    scanf("%d", &expoente);

    resultado = pow(base, expoente);

    printf("%d elevado a %d eh: %d\n", base, expoente, resultado);

    return 0;
}
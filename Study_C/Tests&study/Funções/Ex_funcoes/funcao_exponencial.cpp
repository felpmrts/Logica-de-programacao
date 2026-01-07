#include <stdio.h>

int pow(int a, int b) {

    int resul;

    if(b == 1) {
        return a;
    } else {
        return (resul = a * pow(a, b-1));
    }
}

int main() {

    int a, b, resultado;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Digite um número inteiro: ");
    scanf("%d", &b);

    resultado = pow(a, b);

    printf("O número %d elevado a %d eh: %d\n", a, b, resultado);

    return 0;
}
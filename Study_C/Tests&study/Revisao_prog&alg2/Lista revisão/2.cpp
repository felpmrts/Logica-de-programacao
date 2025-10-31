#include <stdio.h>

int main() {

    int idade_input, anos, meses, dias;

    printf("--- Digite sua idade expressa somente em dias ---\n");
    printf("Idade: ");
    scanf("%d", &idade_input);

    anos = idade_input / 360;
    meses = (idade_input % 360) / 30;
    dias = (idade_input % 360) % 30;

    printf("Você têm %d ano(s), %d meses e %d dia(s)\n", anos, meses, dias);

    return 0;
}
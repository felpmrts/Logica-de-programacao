#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero = 12;

    if(numero > 10) {
        printf("O número é maior que dez!\n");
    }

    return 0;
}
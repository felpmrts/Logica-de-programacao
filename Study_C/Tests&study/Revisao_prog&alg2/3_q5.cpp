#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int idade = 25, altura = 170;

    if(idade >= 18 && altura >= 160) {
        printf("Apto para o evento.\n");
    } else {
        printf("Não apto para o evento.\n");
    }

    return 0;
}
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int idade = 17;

    if(idade >= 18) {
        printf("Pode tirar a CNH.\n");
    } else {
        printf("Ainda não pode tirar a CNH.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {

    char input;

    printf("Digite qualquer letra do alfabeto: ");

    scanf("%c", &input);
    if(input >= 97 && input <= 122) {
        printf("O caracter eh minusculo\n");
    } else {
        printf("O caracter eh maiusculo\n");
    }

    printf("Convertendo o caracter para seu oposto: ");
    if(input >= 97 && input <= 122) {
        printf("%c\n", input - 32); 
    } else {
        printf("%c\n", input + 32);
    }

    return 0;
}

/*
    revisão da tabela ASCII
    - Para converter caracter para decimal só mudar nos prints %c para %d 
*/ 
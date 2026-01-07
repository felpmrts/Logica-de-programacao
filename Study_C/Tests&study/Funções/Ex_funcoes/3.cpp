#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contador_letras(char q_letras[10]) {

    int quant;

    quant = strlen(q_letras);

    return quant;
}

int quantas_vogais(char q_vogais[10]) {
    
    int contador_vogais = 0;

    for(int i = 0; q_vogais[i] != '\0'; i++) {
        if(q_vogais[i] == tolower('A') || q_vogais[i] == tolower('E') || q_vogais[i] == tolower('I') || q_vogais[i] == tolower('O') || q_vogais[i] == tolower('U')) {
            contador_vogais++;
        }
    }

    return contador_vogais;
}

int main() {

    printf("\n\n");

    char nome1[10];
    char nome2[10];

    printf("Digite o nome 1: ");
    scanf("%[^\n]", nome1);

    setbuf(stdin,NULL);

    printf("Digite o nome 2: ");
    scanf("%[^\n]", nome2);
    printf("\n");

    printf("O nome 1 tem: %d letras e %d vogais\n", contador_letras(nome1), quantas_vogais(nome1));
    printf("O nome 2 tem: %d letras e %d vogais\n", contador_letras(nome2), quantas_vogais(nome2));

    return 0;
}
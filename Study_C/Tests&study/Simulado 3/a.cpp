#include <stdio.h>
#include <string.h>

int main() {

    char palavra[101];
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    char inversao[101];
    int j = 0;

    for(int i = tamanho -1; i >= 0; i--) {
        inversao[j] = palavra[i];
        j++;
    }

    inversao[j] = '\0';

    printf("%s\n", inversao);

    if(strcmp(palavra, inversao) == 0) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }


    return 0;
}
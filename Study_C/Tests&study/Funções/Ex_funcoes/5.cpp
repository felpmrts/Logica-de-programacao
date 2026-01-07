#include <stdio.h>
#include <stdlib.h>

int new_strlen(char string[11]) {

    int contador = 0;
    for(int i = 0; string[i] != '\0'; i++) {
        contador++;
    }

    return contador;

}

int main() {

    printf("\n\n");

    char string[11];

    printf("Digite a palavra para ser contabilizada: ");
    scanf("%[^\n]", string);

    printf("O tamanho da string eh: %d\n", new_strlen(string));

    return 0;
}
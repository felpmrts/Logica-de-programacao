#include <stdio.h>
#include <string.h>

int main() {

    char letra;
    scanf("%c", &letra);

    char frase[1001];
    scanf(" %[^\n]", frase);


    int contador = 0;
    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] == letra + 32 || frase[i] == letra - 32 || frase[i] == letra) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
    }
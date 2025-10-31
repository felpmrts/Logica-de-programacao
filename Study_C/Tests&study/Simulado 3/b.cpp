#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char letra;
    char frase[300];

    scanf("%c", &letra);
    scanf(" %299[^\n]s", frase);

    long long int contador = 0;
    for(int i = 0; frase[i] != '\0'; i++) {
        if(tolower(frase[i]) == tolower(letra)) {
            contador++;
        }
    }

    printf("%lld\n", contador);

    return 0;
}
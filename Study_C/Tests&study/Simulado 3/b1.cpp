#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char letra;
    scanf("%c", &letra);

    char frase[1001];
    scanf(" %[^\n]s", frase);

    int cont = 0;
    for(int i = 0; frase[i] != '\0'; i++) {
        if(toupper(frase[i]) == toupper(letra)) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}
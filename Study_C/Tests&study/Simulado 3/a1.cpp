#include <stdio.h>
#include <string.h>

int main() {

    char palavra[101];
    scanf("%[^\n]s", palavra);

    int tam = strlen(palavra);

    char palindromo[101];
    int j = 0;
    for(int i = 0; i < tam; i++) {
        palindromo[j] = palavra[(tam - 1) - i];
        j++;
    }
    palindromo[j] = '\0';

    if(strcmp(palindromo, palavra) == 0) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
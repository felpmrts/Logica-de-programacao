#include <stdio.h>
#include <string.h>

int main() {

    char palavra[101];
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int tam = strlen(palavra);

    char palindromo[101];

    int i;
    int j = 0;
    for(i = 0; i < tam; i++) {
        palindromo[i] = palavra[(tam -1) - i];
        j++;
    }

    palindromo[j] = '\0';

    if(strcmp(palavra, palindromo) == 0) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
    }
#include <stdio.h>
#include <string.h>

int main() {

    char frase[1001];
    scanf(" %[^\n]s", frase);

    int tam = strlen(frase);

    printf("%d\n", tam);


    return 0;

    }
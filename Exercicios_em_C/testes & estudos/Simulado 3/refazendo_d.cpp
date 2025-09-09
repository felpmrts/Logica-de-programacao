#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int quant;
    scanf("%d", &quant);

    char frase[1001];
    scanf(" %[^\n]s", frase);

    for(int i = 0; i < quant; i++) {
        printf("%s\n", frase);
    }

    return 0;

    }
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    long long int quantidade;
    scanf("%lld", &quantidade);

    char frase[500];
    scanf(" %499[^\n]s", frase);

    for(int i = 0; i < quantidade; i++) {
        printf("%s\n", frase);
    }
    

    return 0;
}
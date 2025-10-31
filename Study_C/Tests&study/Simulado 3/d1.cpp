#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    long long int vezes;
    scanf("%lld", &vezes);

    char frase[1001];
    scanf(" %[^\n]s", frase);


    for(int i = 0; i < vezes; i++) {
        printf("%s\n", frase);
    }

    return 0;
}
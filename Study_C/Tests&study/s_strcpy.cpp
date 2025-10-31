#include <stdio.h>
#include <string.h>

int main() {

    char a[15];
    char b[15];

    fgets(a, sizeof(a), stdin);

    a[strcspn(a, "\n")] = '\0';

    fflush(stdin);

    strcpy(b,a);
    printf("%s\n", b);

    return 0;
}

// a sua função strcpy em C copia o caractere nulo (\0) da string de origem (a) para a string de destino (b). Você não precisa fazer isso manualmente.

// Um ponto importante sobre fgets é que, se houver espaço suficiente no buffer, ele também armazena o caractere de nova linha (\n) que é digitado quando você pressiona Enter. POR ISSO É IMPORTANTE USAR FFLUSH(STDIN);

// strncpy(destino, origem, quantidade);
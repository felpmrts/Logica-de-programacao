#include <stdio.h>
#include <string.h>

int main() {

    char nome[51];

    scanf("%[^\n]", nome);
    printf("%s\n", nome);

    return 0;
}
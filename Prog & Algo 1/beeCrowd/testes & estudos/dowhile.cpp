#include <stdio.h>

int main() {

    int n;

    do {
        printf("Digite a senha: ");
        scanf("%d", &n);
    } while (n != 27);

    printf("Acertou!\n");

    return 0;
}
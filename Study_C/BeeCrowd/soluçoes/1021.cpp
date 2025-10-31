#include <stdio.h>

int main () {

    int id;
    scanf("%d", &id);

    switch (id) {
        case 1:
            printf("papel\n");
            break;
        case 2:
            printf("Tesoura\n");
            break;
        case 3:
            printf("Cola\n");
            break;
        default:
        printf("Item nao encontrado");

    }

    return 0;
}
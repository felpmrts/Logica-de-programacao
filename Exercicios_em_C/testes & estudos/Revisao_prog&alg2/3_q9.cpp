#include <stdio.h>

int main() {

    char letra = 'A';

    switch(letra) {

        case 'A':
        case 'a':
            printf("Começa com A.\n");
            break;

        default:
            printf("Nao começa com A.\n");

    }

    return 0;
}
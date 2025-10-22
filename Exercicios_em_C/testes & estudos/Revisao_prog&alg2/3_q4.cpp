#include <stdio.h>

int main() {

    int nota = 75;

    if(nota >= 90) {
        printf("Excelente\n");
    } else if (nota >= 70) {
        printf("Bom\n");
    } else {
        printf("Insuficiente\n");
    }

    return 0;
}
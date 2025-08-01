#include <stdio.h>

int main() {

    int inteiro;

    scanf("%d", &inteiro);
    if(inteiro > 0) {
        
        printf("positivo\n");

    } else if(inteiro < 0) {

        printf("negativo\n");

    } else {

        printf("nulo\n");

    }

    return 0;
}
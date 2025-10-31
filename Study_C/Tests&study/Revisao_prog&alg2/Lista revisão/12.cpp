#include <stdio.h>

#define max 5

int main() {

    int inteiros[max];

    for(int i = 0; i < max; i++) {
        printf("Digite um número: ");
        scanf("%d", &inteiros[i]);
    }

    printf("\n");
    printf("Os números positivos desse conjunto eh: ");

    for(int i = 0; i < max; i++) {
        if(inteiros[i] > 0) {
            printf("%d ", inteiros[i]);
        }
    }

    printf("\n");

    return 0;
}
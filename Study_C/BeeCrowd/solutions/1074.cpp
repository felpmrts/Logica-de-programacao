#include <stdio.h>

int main() {

    int input;
    int ql; //Quantidade de leitura do programa
    int i;

    scanf("%d", &ql);

    for(i = 0; i < ql; i++) {
        scanf("%d", &input);
        if(input % 2 == 0 && input != 0) {
            if(input > 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else if(input % 2 && input != 0) {
            if(input > 0) {
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        } else {
            printf("NULL\n");
        }
        
    }

    return 0;
}
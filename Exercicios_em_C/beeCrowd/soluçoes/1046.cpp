#include <stdio.h>

int main() {

    int A, Z, caso1, caso2;

    scanf("%d %d", &A, &Z);

    if(A > Z) {
        caso1 = 24 - A + Z;
        printf("O JOGO DUROU %d HORA(S)\n", caso1);
    } else if (A < Z) {
        caso2 = (A - Z) * -1;
        printf("O JOGO DUROU %d HORA(S)\n", caso2);
    } else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }


    return 0;
}
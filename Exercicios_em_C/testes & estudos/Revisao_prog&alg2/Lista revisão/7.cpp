#include <stdio.h>

int main() {

    int I;
    double A, B, C, aux;

    printf("Digite um valor para I de 1, 2 ou 3: ");
    scanf("%d", &I);

    if(I > 0 && I < 4) {

        printf("Digite um número real para A: ");
        scanf("%lf", &A);

        printf("Digite um número real para B: ");
        scanf("%lf", &B);

        printf("Digite um número real para C: ");
        scanf("%lf", &C);

        if(I == 1) {
            
            if(A > C) {
                aux = A;
                A = C;
                C = aux;
            }

            if(A > B) {
                aux = A;
                A = B;
                B = aux;
            }

            if(B > C) {
                aux = B;
                B = C;
                C = aux;
            }

            printf("Ordem crescente: %.2lf < %.2lf < %.2lf\n", A, B, C);

        } else if(I == 2) { 

            if(A < C) {
                aux = A;
                A = C;
                C = aux;
            }

            if(A < B) {
                aux = A;
                A = B;
                B = aux;
            }

            if(B < C) {
                aux = B;
                B = C;
                C = aux;
            }

            printf("Ordem decrescente: %.2lf > %.2lf > %.2lf\n", A, B, C);

        } else {

            if(A > C) {
                aux = A;
                A = C;
                C = aux;
            }

            if(A > B) {
                aux = A;
                A = B;
                B = aux;
            }

            if(B > C) {
                aux = B;
                B = C;
                C = aux;
            }

            printf("O maior fica entre os dois número: %.2lf | %.2lf | %.2lf\n", A, C, B);

        }

    } else {
        printf("O número %d não é válido\n", I);
    }

    return 0;
}
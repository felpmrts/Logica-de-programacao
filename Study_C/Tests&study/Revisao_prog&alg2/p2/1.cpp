#include <stdio.h>

void normaliza(float *p) {

    float *p1;
    p1 = p;

    float soma = 0;

    for(p1 = p; p1 <= p + 3; p1++) {
        soma = soma + *(p1);
    }

    for(p1 = p; p1 <= p + 3; p1++) {
        (*p1) = (*p1) / soma;
    }

    int i = 0;
    for(p1 = p; p1 <= p + 3; p1++) {
        printf("Novo valor vetor[%i]: %.2f\n", i, *(p1));
        i++;
    }

}

int main() {

    float vetor[] = {2.5, 3.5, 4.5, 5.5};
    float *p;

    p = vetor;

    printf("\n\n");

    normaliza(p);

    printf("\n\n");

    return 0;
}
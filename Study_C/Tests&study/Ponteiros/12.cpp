#include <stdio.h>

int main() {

    int vetor[] = {1, 2, 3, 4, 5};
    int *p;

    p = vetor;

    for(p = vetor; p <= vetor + 4; p++) {
        *(p) = *(p) + 1;
    }

    for(p = vetor; p <= vetor + 4; p++) {
        printf("%d ", *(p));
    }

    printf("\n");

    return 0;
}
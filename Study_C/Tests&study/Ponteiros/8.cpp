#include <stdio.h>

int main() {

    int vetor[5];
    int *p;

    p = vetor;

    for(p = vetor; p <= vetor + 4; p++) {
        scanf("%d", p);
    }

    for(p = vetor; p <= vetor + 4; p++) {
        
        if(*(p) % 2 == 0) {
            printf("%p ", p);
        }
    }

    return 0;
}
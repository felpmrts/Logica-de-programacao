#include <stdio.h>

int main() {

    float enderecos[10];
    float *Pend = NULL;

    for(int i = 0; i < 10; i++) {
        Pend = &enderecos[i];
        printf("O endereço de memória do vetor[%d]: %p\n", i, Pend);
    }

    return 0;
}
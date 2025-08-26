#include <stdio.h>

int main() {

    long long int a, b;

    while(scanf("%lld %lld", &a, &b) != EOF) {
        printf("%lld\n", a ^ b);
    }

    return 0;
}

/*
    & (AND) → 1 se ambos os bits forem 1
    | (OR) → 1 se pelo menos um bit for 1
    ^ (XOR) → 1 se os bits forem diferentes
    ~ (NOT) → inverte todos os bits
    << (shift left) → desloca bits para a esquerda
    >> (shift right) → desloca bits para a direita

*/
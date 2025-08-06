#include <stdio.h>

int f(int x){ // funcao fatorial
    if(x == 0){ // caso base
        return 1;
    }
    else{ // recursao
        return x * f(x-1);
    }
}

int main(){
    int N;

    scanf("%d", &N);

    printf("O fatorial de %d eh %d\n", N, f(N));
}
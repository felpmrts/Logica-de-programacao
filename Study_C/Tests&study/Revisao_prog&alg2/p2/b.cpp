#include <stdio.h>

int main() {

    int x = 10;
    int *p;
    p = &x;

    *(p) = 50;

    printf("O valor de x eh: %d\n", x);
    
    return 0;
}
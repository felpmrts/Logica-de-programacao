#include <stdio.h>

void troca(int *p1, int *p2) {

    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {

    int v1 = 5, v2 = 10;

    printf("ANTES:\nv1 = %d\nv2 = %d\n", v1, v2);

    troca(&v1, &v2);

    printf("DEPOIS:\nv1 = %d\nv2 = %d\n", v1, v2);

    return 0;
}
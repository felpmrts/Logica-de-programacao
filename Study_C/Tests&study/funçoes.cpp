#include <stdio.h>

float divisao(float a, float b) {

    float d;

    d = a / b;

    return d;
}

int resto(int a, int b) {

    int r;

    r = a % b;

    return r;
}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);
    printf("Divisao: %.1f\nResto: %d\n", divisao(a,b), resto(a,b));

}
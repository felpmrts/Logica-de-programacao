#include <stdio.h>

int main() {

    int dados[2][3] = {{0, 0, 0}, {0, 0, 0}};

    dados[1][0] = 99;

    printf("%d\n", dados[0][2]);

    return 0;
}
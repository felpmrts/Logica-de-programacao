#include <stdio.h>

int soma(int b, int c) {

    int s;

    s = b + c;

    return s;
}

int main() {

    int b, c;
    scanf("%d %d", &b, &c);

    int s = soma(b, c);

    if (s % 2 == 0 || s == 0) {
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }

    return 0;
}

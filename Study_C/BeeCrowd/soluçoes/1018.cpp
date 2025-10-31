#include <stdio.h>

int main() {

    int n, r100, r50, r20, r10, r5, r2, r1;

    scanf("%d", &n);

    printf("%d\n", n);

    printf("%d nota(s) de R$ 100,00\n", n / 100);

    r100 = n % 100;
    printf("%d nota(s) de R$ 50,00\n", r100 / 50);

    r50 = r100 % 50;
    printf("%d nota(s) de R$ 20,00\n", r50 / 20);

    r20 = r50 % 20;
    printf("%d nota(s) de R$ 10,00\n", r20 / 10);

    r10 = r20 % 10;
    printf("%d nota(s) de R$ 5,00\n", r10 / 5);

    r5 = r10 % 5;
    printf("%d nota(s) de R$ 2,00\n", r5 / 2);

    r2 = r5 % 2;
    printf("%d nota(s) de R$ 1,00\n", r2 / 1);
    
    return 0;

}
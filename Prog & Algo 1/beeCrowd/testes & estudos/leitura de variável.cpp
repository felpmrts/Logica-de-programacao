#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;

    printf("escolha um numero: "); // pode-se usar assim: scanf("%d%d", &a, &b)
    scanf("%d", &a);

    printf("escolha outro numero: ");
    scanf("%d", &b);

    printf("A soma dos algarismos eh = %d\n", a+b);
 
    return 0;
}

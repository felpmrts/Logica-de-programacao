#include <stdio.h>

int main() {

    int codigo, quantidade;
    float cq, xs, xb, ts, r;

    scanf("%d %d", &codigo, &quantidade);

    cq = 4;
    xs = 4.5;
    xb = 5;
    ts = 2;
    r = 1.5;

    switch(codigo) {
        case 1:
            printf("Total: R$ %.2f\n", cq * quantidade);
            break;
        case 2:
            printf("Total: R$ %.2f\n", xs * quantidade);
            break;
        case 3:
            printf("Total: R$ %.2f\n", xb * quantidade);
            break;
        case 4:
            printf("Total: R$ %.2f\n", ts * quantidade);
            break;
        case 5:
            printf("Total: R$ %.2f\n", r * quantidade);
            break;
    }

return 0;
}
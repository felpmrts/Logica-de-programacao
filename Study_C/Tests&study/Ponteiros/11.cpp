#include <stdio.h>

int main() {

    int matriz[100][100];
    int *p;
    int *f;

    p = &matriz[0][0];
    f = &matriz[99][99];

    while(p <= f) {
        *(p) = 0;
        p++;
    }

    p = &matriz[0][0];

    int contador = 1;
    while(p <= f) {
        *(p) = *(p) + contador;
        contador++;
        p++;
    }

    p = &matriz[0][0];

    while(p <= f) {
        printf("%d ", *(p));
        p++;
    }

    return 0;
}
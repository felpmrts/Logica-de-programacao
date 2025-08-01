#include <stdio.h>

int main () {

    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if(x > y > z) {
        printf("%d\n%d\n%d\n", x, y, z);
    } else if (x > z > y) {
        printf("%d\n%d\n%d\n", x, z, y);
    } else if(y > x > z) {
        printf("%d\n%d\n%d\n", y, x, z);
    } else if (y > z > x) {
        printf("%d\n%d\n%d\n", y, z, x);
    } else if(z > y > x) {
        printf("%d\n%d\n%d\n", z, y, x);
    } else if(z > x > y) {
        printf("%d\n%d\n%d\n", z, x, y);
    }

    printf("%d %d %d\n", x, y, z);

    return 0;
} // NAO FEITO!!
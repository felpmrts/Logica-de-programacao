#include <stdio.h>

int main() {

    int v[10], i, j;

    for(i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for(j = 9; j > -1; j--) {
        printf("%d\n", v[j]);
    }

    return 0;
}
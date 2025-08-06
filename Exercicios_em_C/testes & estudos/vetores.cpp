#include <stdio.h>

/*
int main() {

    int v[3];
    // v[0] = 1; *v = 1;
    // v[1] = 2; *v(v+1);
    // v[2] = 3; *v(v+2);

    printf("%d %d %d\n", v[0], v[1], v[2]);


    return 0;
}
*/

int main() {

    int v[3], i;

    for(i = 0; i < 3; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 3; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
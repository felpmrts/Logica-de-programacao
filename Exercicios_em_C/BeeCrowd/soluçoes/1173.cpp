#include <stdio.h>

int main() {

    int m[10], i, input;

        scanf("%d", &input);

    for(i = 0; i < 10; i++) {

        if(i == 0) {
            m[0] = input;    
        } else if (i == 1) {
            m[1] = m[0] * 2 ;
        } else {
            m[i] = m[i-1] * 2;
        }

    }

    for(i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, m[i]);
    }

    return 0;
}
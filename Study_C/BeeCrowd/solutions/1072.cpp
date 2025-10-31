#include <stdio.h>

int main() {

    int input;
    int i;

    scanf("%d", &input);

    if(input % 2 == 0) {
        for(i = 2; i <= input; i += 2) {
            printf("%d^2 = %d\n", i, i*i);
        }
    }

    return 0;
}
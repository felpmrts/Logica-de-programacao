#include <stdio.h>

int main() {

    int input;
    int i;

    scanf("%d", &input);

    for (i = 1; i <= input ; i = i + 2) {
        printf("%d\n", i);
    }
    

    return 0;
}
#include <stdio.h>

int main() {

    int input;
    int i;

    scanf("%d", &input);

    if(input % 2 == 0) {
        input++;
    } 

    for (i = input; i < input + 12; i+=2) {
        printf("%d\n", i);
    }
    

    return 0;
}
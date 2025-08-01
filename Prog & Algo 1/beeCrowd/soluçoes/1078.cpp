#include <stdio.h>
 
int main() {
 
    int input;
    int contador_tabuada = 0;
    int i;

    scanf("%d", &input);

    for(i = 1; i <= 10; i++) {
        contador_tabuada++;
        printf("%d x %d = %d\n", contador_tabuada, input, input * contador_tabuada);
    }
 
    return 0;
}
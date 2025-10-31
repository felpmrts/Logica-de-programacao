#include <stdio.h>
#include <string.h>

int main() {

    char string1[50], c;

    scanf("%s %c", string1, &c);

    int i, contador = 0;

    for(i = 0; i < strlen(string1); i++) {
            if(string1[i] == c) {
                contador++;
            }    
        }

    printf("%d\n", contador);

    return 0;
}
#include <stdio.h>

int main() {

    char s[300];

    fgets(s, 300, stdin);
    fflush(stdin);

    int i;
    int contador = 0;

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= '0' && s[i] <= '9'){
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}
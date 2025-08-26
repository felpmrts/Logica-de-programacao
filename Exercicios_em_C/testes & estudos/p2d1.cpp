#include <stdio.h>

int main() {

    char frase[300];

    fgets(frase, 300, stdin);
    fflush(stdin);

    int i, contador = 0;

    for(i = 0; frase[i] != '\0'; i++) {
        if(frase[i] >= '0' && frase[i] <= '9'){
            contador++;
        }
        
    }

    printf("%d\n", contador);

    return 0;
}
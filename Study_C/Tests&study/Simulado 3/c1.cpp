#include <stdio.h>
#include <string.h>

int main() {

    int vezes;
    scanf("%d", &vezes);
    
    char frase[15000] = "C";

    for(int i = 0; i < vezes; i++) {
        strcat(frase, "a");
    }

    strcat(frase, "rlos, que felicidade!");

    printf("%s\n", frase);


    return 0;
}
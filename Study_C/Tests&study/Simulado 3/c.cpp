#include <stdio.h>
#include <string.h>

int main() {

    char frase[300] = "C";
    int quant;

    scanf("%d", &quant);

    for(int i = 0; i < quant; i++) {
        strcat(frase, "a");
    }

    strcat(frase, "rlos, que felicidade!");

    printf("%s\n", frase);
    

    return 0;
}
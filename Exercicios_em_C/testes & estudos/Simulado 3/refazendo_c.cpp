#include <stdio.h>
#include <string.h>

int main() {

    int quant;
    scanf("%d", &quant);
    
    char frasecarlos[50000] = "C";

    for(int i = 0; i < quant; i++) {
        strcat(frasecarlos, "a");
    }

    strcat(frasecarlos, "rlos, que felicidade!");

    printf("%s\n", frasecarlos);


    return 0;

    }
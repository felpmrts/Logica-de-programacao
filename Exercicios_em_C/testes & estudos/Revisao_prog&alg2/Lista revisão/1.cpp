#include <stdio.h>

int main() {

    int anos, meses, dias, idade_convertida;

    printf("Digite sua idade exata em anos, meses e dias\n");
    
    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    idade_convertida = (anos * 360) + (meses * 30) + dias;

    printf("Sua idade expressa em dias eh: %d\n", idade_convertida);


    return 0;
}
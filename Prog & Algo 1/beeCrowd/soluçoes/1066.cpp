#include <stdio.h>

int main() {

    int input;
    int contador_par = 0, contador_inpar = 0, contador_positivo = 0, contador_negativo = 0;
    int i;

    for(i = 0; i < 5; i++) {
            scanf("%d", &input);

            if(input % 2 == 0) {
                contador_par++;
            }
            if (input % 2 != 0) {
                contador_inpar++;
            }
            if(input > 0) {
                contador_positivo++;
            }
            if(input < 0) {
                contador_negativo++;
            }
            
    }

    printf("%d valor(es) par(es)\n", contador_par);
    printf("%d valor(es) impar(es)\n", contador_inpar);
    printf("%d valor(es) positivo(s)\n", contador_positivo);
    printf("%d valor(es) negativo(s)\n", contador_negativo);

    return 0;
}
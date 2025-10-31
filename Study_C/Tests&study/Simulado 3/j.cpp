#include <stdio.h>
#include <string.h>

typedef struct {

    char cor[500];
    char fabricante[500];
    int qmarchas;
    float preço;

} informaçao;

int main() {

    int Qbikes;
    int marcha_menor, marcha_maior;
    informaçao bicicleta[33];

    scanf("%d %d %d", &Qbikes, &marcha_menor, &marcha_maior);

    for(int i = 0; i < Qbikes; i++) {
        scanf(" %[^\n]s", bicicleta[i].cor);
        scanf(" %[^\n]s", bicicleta[i].fabricante);
        scanf("%d", &bicicleta[i].qmarchas);
        scanf("%f", &bicicleta[i].preço);
    }

    for(int j = 0; j < Qbikes; j++) {
        if(bicicleta[j].qmarchas >= marcha_menor && bicicleta[j].qmarchas <= marcha_maior) {
            printf("%s\n", bicicleta[j].cor);
            printf("%s\n", bicicleta[j].fabricante);
            printf("%d\n", bicicleta[j].qmarchas);
            printf("%.2f\n", bicicleta[j].preço);
        }
    }

    return 0;
}
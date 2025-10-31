#include <stdio.h>
#include <string.h>

typedef struct{
    
    char cor[500];
    char marca[500];
    int marcha;
    float preço;

} info;

int main() {

    int quantb, minM, maxM;
    scanf("%d %d %d", &quantb, &minM, &maxM);

    info bike[quantb];
    for(int i = 0; i < quantb; i++) {
        scanf(" %[^\n]s", bike[i].cor);
        scanf(" %[^\n]s", bike[i].marca);
        scanf("%d", &bike[i].marcha);
        scanf("%f", &bike[i].preço);
    }

    for(int i = 0; i < quantb; i++) {
        if(bike[i].marcha >= minM && bike[i].marcha <= maxM) {
            printf("%s\n", bike[i].cor);
            printf("%s\n", bike[i].marca);
            printf("%d\n", bike[i].marcha);
            printf("%.2f\n", bike[i].preço);
        }
    }

    return 0;

    }
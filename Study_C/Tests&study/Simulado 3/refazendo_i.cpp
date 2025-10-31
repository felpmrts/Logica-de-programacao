#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    
    float preço;
    char local[51];

} info;

int main() {

    setlocale(LC_ALL, "Portuguese");

    info opçao[4];

    for(int i = 0; i < 4; i++) {
        scanf("%f", &opçao[i].preço);
        scanf(" %[^\n]s", opçao[i].local);
    }

    int j = 0;
    for(int i = 0; i < 4; i++) {
        if(opçao[j].preço > opçao[i].preço) {
            j = i;
        }
    }

    printf("%.2f ", opçao[j].preço);
    printf("%s\n", opçao[j].local);

    


    return 0;

    }
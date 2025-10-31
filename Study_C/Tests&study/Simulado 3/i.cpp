#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {

    float preco;
    char nome[51];

} produto;

int main() {

    produto o[4];

    for(int i = 0; i < 4; i++) {
        scanf("%f %[^\n]s", &o[i].preco, o[i].nome);
    }

    int j = 0;
    for(int i = 0; i < 4; i++) {
        if(o[j].preco > o[i].preco) {
            j = i;
        }
    }

    printf("%.2f %s\n", o[j].preco, o[j].nome);


    return 0;
}
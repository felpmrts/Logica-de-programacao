#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char nome[50];
    float preco;

} produto;

int main() {

    produto monitor;

    monitor.id = 101;
    strcpy(monitor.nome, "Monitor LCD 24");
    monitor.preco = 750.50;

    printf("Id do produto: %d\n", monitor.id);
    printf("NOme: %s\n", monitor.nome);
    printf("Preço: %.2f\n", monitor.preco);

    return 0;
}

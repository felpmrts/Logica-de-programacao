#include <stdio.h>

typedef struct { 

    int codigo;
    char nome[20];
    float preco;
    int qunatidade_estoque;

} info_produto;

int main() {

    info_produto produto[10];
    int pedidos[5][2]; // 5 pedidos e 2 colunas (Coluna 0 = código do produto e Coluna 1 = quantidade_desejada)

    for(int i = 0; i < 10; i++) {

        printf("--- Digite os dados do produto %d ---\n", i + 1);
        printf("\n");

        printf("Código: ");
        scanf(" %d", &produto[i].codigo);

        printf("Nome: ");
        scanf(" %[^\n]", produto[i].nome);

        printf("Preço: ");
        scanf(" %f", &produto[i].preco);

        printf("Quantidade no estoque: ");
        scanf(" %d", &produto[i].qunatidade_estoque);

        printf("\n");

    }

    // j -> pedidos & k -> colunas
    // contador_string -> especificar o nome

    const char *nome_codigo[2] = {"Código do produto: ", "Quantidade desejada: "};

    for(int j = 0; j < 5; j++) {
        printf("--- Adição do pedido %d ---\n", j+1);
        for(int k = 0; k < 2; k++) {
            for(int l = 0; l< 2; l++) {
                printf("%s", nome_codigo[l]);
                scanf(" %d", &pedidos[j][k]);
            }
            
        }
        printf("\n");
    }

    return 0;
}
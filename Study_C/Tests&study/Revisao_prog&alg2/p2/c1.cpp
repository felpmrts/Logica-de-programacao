#include <stdio.h>
#include <stdlib.h>

typedef struct {

    char nome[21];
    int quantidade;
    float preco;

} info;

int realizarVenda(info *p, int quant_vendas) {

    if(p->quantidade >= quant_vendas) {
        p->quantidade = p->quantidade - quant_vendas;
        return 1;
    }  else {
        return 0;
    }

}

int main() {

    system("clear");
    info produto1;
    int vendas;
    int bolean;

    produto1.quantidade = 10;

    printf("Digite o nome do produto: ");
    scanf("%20[^\n]", produto1.nome);

    printf("\n\n=== Dados do produto: %s ===\n", produto1.nome);
    printf("Preço: R$ 20,00\n");
    printf("Quantidade no estoque: %d\n", produto1.quantidade);
    printf("--------------------------------\n\n");

    printf("Digite a quantidade a ser vendida do produto:\n>> ");
    scanf("%d", &vendas);

    bolean = realizarVenda(&produto1, vendas);

    if(bolean == 1) {
        printf("\n\nA venda foi realizado com sucesso!\n\n");
    } else {
        printf("\n\nA Não há produtos suficentes para esse volume de vendas!\n\n");
    }

    printf("\n\n=== Dados do produto: %s ===\n", produto1.nome);
    printf("Preço: R$ 20,00\n");
    printf("Quantidade no estoque: %d\n", produto1.quantidade);
    printf("--------------------------------\n\n");

    
    

    return 0;
}
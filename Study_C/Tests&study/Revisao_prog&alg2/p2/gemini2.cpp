#include <stdio.h>

typedef struct{

    int codigo;
    float preco;
    int estoque;

} info;

void atualizar_produto(info *p, int tam_vetor, int slot) {

    float percentual;
    printf("Digite o percentual: ");
    scanf("%f", &percentual);

    for(int i = 0; i < tam_vetor; i++) {

        if( p->codigo == slot) {
            p->preco = p->preco * (1 + (percentual/100));
            printf("O novo valor fica em: R$ %.2f\n", p->preco);
        }
        p++;
    }

}

int main() {

    info produtos[4];
    produtos[0].codigo = 0; produtos[1].codigo = 1; produtos[2].codigo = 2; produtos[3].codigo = 3;
    produtos[0].preco = 100; produtos[1].preco = 150; produtos[2].preco = 200; produtos[3].preco = 300;
    int codigo;

    printf("Digite o código do produto gostaria de acessar: ");
    scanf("%d", &codigo);

    atualizar_produto(produtos, 4, codigo);

    return 0;
}
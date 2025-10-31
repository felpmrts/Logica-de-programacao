#include <stdio.h>
#include <string.h>

typedef struct {

    char nome[50];
    int idade;
    float peso;

} tipo_pessoa;

int main() {

    tipo_pessoa usuario;

    scanf(" %49[^\n]s", usuario.nome);
    scanf("%d", &usuario.idade);
    scanf("%f", &usuario.peso);

    printf("\n--- Dados do Usuário ---\n");
    printf("Nome: %s\n", usuario.nome);
    printf("Idade: %d\n", usuario.idade);
    printf("Peso: %.2f\n", usuario.peso);
    printf("\n");


    return 0;
}

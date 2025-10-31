#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define TAM 3

typedef struct
{
    char nome[50];
    int idade;
    float peso;

} dados_pessoais;

int main() {

    dados_pessoais usuario[TAM];

    for(int i = 0; i < TAM; i++) {

        printf("------ Dados do usuário %d ------\n", i+1);

        printf("Nome: ");
        scanf(" %49[^\n]s", usuario[i].nome);

        printf("Idade: ");
        scanf("%d", &usuario[i].idade);

        printf("Peso: ");
        scanf("%f", &usuario[i].peso);

        sleep(1);
        system("clear");

    }

    for(int j = 0; j < TAM; j++) {

        printf("------ Usuario %d ------\n\n", j+1);
        printf("Nome: %s\n", usuario[j].nome);
        printf("Idade: %d\n", usuario[j].idade);
        printf("Peso: %.2f\n", usuario[j].peso);
        printf("\n");

    }

    printf("------------------------\n");
    printf("\n");

    return 0;
}
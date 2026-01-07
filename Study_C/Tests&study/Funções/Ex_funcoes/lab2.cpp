#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {

    char nome[50];
    float nota1;
    float nota2;
    int ID;

} info;

void apresentacao() {
    printf("\n\n");
    printf("=============================\n");
    printf("   Sistema Escolar da UFU!   \n");
    printf("=============================\n");
    printf("\n");
}

void despedida() {
    printf("\n");
    printf("=============================\n");
    printf("     SAINDO DO PROGRAMA...   \n");
    printf("=============================\n");
    printf("\n");
}

void cadastrar(info *aluno, int qtd) {

    system("clear");
    printf("\n====== Novo Cadastro ======\n\n");

    setbuf(stdin,NULL);
    printf("Nome do aluno: ");
    scanf("%[^\n]", (*aluno).nome);

    printf("Nota 1: ");
    scanf("%f", &(*aluno).nota1);

    printf("Nota 2: ");
    scanf("%f", &(*aluno).nota2);

    (*aluno).ID = qtd;
    printf("\nSeu ID eh: %d\n\n", (*aluno).ID);

    sleep(3);

    printf("Aluno cadastrado com sucesso!\n");

    sleep(2);

}

float calcular_media_valor(float nota1, float nota2) {
    
    return (nota1 + nota2) / 2.0;
}

void atualizar_notas_referencia(info *aluno) {

    
    printf("\n====== Dados anteriores ======\n\n");
    printf("Nome: %s\n", (*aluno).nome);
    printf("Nota 1: %.1f\n", (*aluno).nota1);
    printf("Nota 2: %.1f\n\n", (*aluno).nota2);
    printf("------------------------------\n\n");

    printf("Deseja atualizar alguma informação? (s/n) \n");
    printf(">> ");

    setbuf(stdin,NULL);
    char confirmacao;
    scanf("%c", &confirmacao);

    if(confirmacao == 's') {

        system("clear");
        printf("\n====== Atualizar cadastro ======\n\n");

        setbuf(stdin,NULL);
        printf("Nota 1: ");
        scanf(" %f", &(*aluno).nota1);

        printf("Nota 2: ");
        scanf(" %f", &(*aluno).nota2);

        printf("\nOs dados foram atualizados!");
        sleep(1);
        

    }

    system("clear");

}

void mostrar_dados(info *aluno) {

    system("clear");
    printf("\n====== Dados do aluno ======\n\n");

    printf("Nome: %s\n", (*aluno).nome);
    printf("Nota 1: %.1f\n", (*aluno).nota1);
    printf("Nota 2: %.1f\n", (*aluno).nota2);
    printf("Média: %.2lf\n", calcular_media_valor(aluno->nota1, aluno->nota2));

    if(calcular_media_valor(aluno->nota1, aluno->nota2) >= 6.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    printf("\n-----------------------\n\n");

    printf("Selecione qualquer tecla para ir para o menu\n");
    printf(">> ");
    char qualquer;
    setbuf(stdin,NULL);
    scanf("%c", &qualquer);

}

void menu () {

    int op = 10;

    info aluno[123];
    int qtd = 0;
    int ID;

    do {

        system("clear");
        printf("\n====== MENU ======\n\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Atualizar notas\n");
        printf("3. Mostrar dados\n");
        printf("5. Sair\n");
        printf(">> ");
        scanf("%d", &op);

    switch (op) {

    case 1:
            
        cadastrar(aluno + qtd, qtd);
        qtd++;

        break;

    case 2:

        system("clear");
        printf("Digite o ID do aluno: ");
        scanf("%d", &ID);

        atualizar_notas_referencia(aluno + ID);
        system("clear");

        break;

    case 3:

        system("clear");
        printf("Digite o ID do aluno: ");
        scanf("%d", &ID);

        mostrar_dados(aluno + ID);

        break;
        
    default:
        break;
    }

    } while(op != 5);

}

int main() {

    apresentacao();
    sleep(2);
    system("clear");
    menu();
    system("clear");
    despedida();
    sleep(2);
    system("clear");

    return 0;
}
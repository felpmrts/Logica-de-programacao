#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int opcao = -1;

    do {

        system("clear");
        printf("--- MEU MENU ---\n");
        printf("1. Opcao A\n");
        printf("2. Opcao B\n");
        printf("3. Opcao C\n");
        printf("0. Sair\n");
        printf("-----------------\n");
        printf("Digite sua escolha: ");

        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida\n");
                break;
        }

    } while(opcao != 0);

    return 0;
}
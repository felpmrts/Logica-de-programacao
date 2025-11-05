#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void apresentacao() {
    printf("\n");
    printf("=============================\n");
    printf("   CALCULADORA DE BAIXO QI   \n");
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

float soma(float A, float B) {
    
    float soma;

    soma = A + B;

    return soma;
}

float subtracao(float A, float B) {
    
    float sub;

    sub = A - B;

    return sub;
}

float divisao(float A, float B) {
    
    float div;

    div = A / B;

    return div;
}

float multiplicacao(float A, float B) {
    
    float mult;

    mult = A * B;

    return mult;
}


void menu() {

    int op;
    char again;

    do {
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Divisão\n");
        printf("4. Multiplicação\n");
        printf("0. Sair\n");
        printf(">> ");

        scanf("%d", &op);

        switch (op) {
        case 1: 

            system("clear");
            float a, b, somaAB;
            printf("Digite o primeiro valor: ");
            scanf("%f", &a);

            printf("Digite o segundo valor: ");
            scanf("%f", &b);

            somaAB = soma(a, b);
            printf("Solução: %f\n", somaAB);

            printf("\n");
            printf("Quer realizar outra operação (s/n): ");
            scanf(" %c", &again);

            if(again == 's') {
                system("clear");
            } else if(again == 'n') {
                op = 0;
            }

            break;

        case 2:

            system("clear");
            float c, d, subCD;
            printf("Digite o primeiro valor: ");
            scanf("%f", &c);

            printf("Digite o segundo valor: ");
            scanf("%f", &d);

            subCD = subtracao(c, d);
            printf("Solução: %f\n", subCD);

            printf("\n");
            printf("Quer realizar outra operação (s/n): ");
            scanf(" %c", &again);

            if(again == 's') {
                system("clear");
            } else if(again == 'n') {
                op = 0;
            }

            break;

        case 3:
            
            system("clear");
            float e, f, divEF;
            printf("Digite o primeiro valor: ");
            scanf("%f", &e);

            printf("Digite o segundo valor: ");
            scanf("%f", &f);

            divEF = divisao(e, f);
            printf("Solução: %f\n", divEF);

            printf("\n");
            printf("Quer realizar outra operação (s/n): ");
            scanf(" %c", &again);

            if(again == 's') {
                system("clear");
            } else if(again == 'n') {
                op = 0;
            }
            break;

        case 4:

            system("clear");
            float g, h, multGH;
            printf("Digite o primeiro valor: ");
            scanf("%f", &g);

            printf("Digite o segundo valor: ");
            scanf("%f", &h);

            multGH = multiplicacao(g, h);
            printf("Solução: %f\n", multGH);

            printf("\n");
            printf("Quer realizar outra operação (s/n): ");
            scanf(" %c", &again);

            if(again == 's') {
                system("clear");
            } else if(again == 'n') {
                op = 0;
            }

            break;
        
        default:
            break;
        }
    } while(op != 0);

}

int main() {

    apresentacao();
    menu();
    despedida();
    sleep(3);
    system("clear");

    return 0;
}

#include <stdio.h>

int main() {

    float nota_trabalho, nota_semestral, nota_exame, media_ponderada;

    printf("Digite sua nota do Trabalho de laboratório: ");
    scanf("%f", &nota_trabalho);

    printf("Digite sua nota da avaliação semestral: ");
    scanf("%f", &nota_semestral);

    printf("Digite sua nota do exame final: ");
    scanf("%f", &nota_exame);

    media_ponderada = (nota_trabalho * 2 + nota_semestral * 3 + nota_exame * 5) / 10;

    printf("Sua média ponderada é: %.2f e conceito ", media_ponderada);

    if(media_ponderada >= 8.01) {
        printf("A\n");
    } else if (media_ponderada >= 7.01) {
        printf("B\n");
    } else if(media_ponderada >= 6.01) {
        printf("C\n");
    } else if(media_ponderada >= 5.01) {
        printf("D\n");
    } else {
        printf("E\n");
    }

    return 0;
}
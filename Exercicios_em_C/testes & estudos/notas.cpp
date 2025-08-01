#include <stdio.h>

int main() {

    float p1, p2, p3, media;
    char aluno[50];

    printf("Digite o nome do aluno: ");
    scanf("%s", aluno);

    printf("Digite a nota da prova 1: ");
    scanf("%f", &p1);

    printf("Digite a nota da prova 2: ");
    scanf("%f", &p2);

    printf("Digite a nota da prova 3: ");
    scanf("%f", &p3);

    media = (p1 * 1 + p2 * 2 + p3 * 3)/6;

    printf("A media ponderada eh: %.1f\n", media);
    printf("Portanto, o(a) %s está ", aluno);

    if(media >= 6) {

        printf("aprovado!\n");

    } else if(media > 3) {

        printf("de recuperação\n");
    } else {

        printf("reprovado!\n");
    }


    return 0;
}
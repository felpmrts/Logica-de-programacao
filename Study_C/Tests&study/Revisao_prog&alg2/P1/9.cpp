#include <stdio.h>

// a -> alunos e n -> notas

typedef struct {

    char nome[20];
    int matricula;
    float media_final;

} dados;

int main() {

    dados alunos[5];
    float notas[5][3];

    for(int i = 0; i < 5; i++) {
        printf("--- Informações do aluno %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Matrícula: ");
        scanf(" %d", &alunos[i].matricula);
    }

    printf("\n");

    for(int alu = 0; alu < 5; alu++) {
        printf("--- Digite as notas do aluno %d ---\n", alu + 1);
        for(int nots = 0; nots < 3; nots++) {
            printf("Nota P%d: ", nots+1);
            scanf(" %f", &notas[alu][nots]);
        }
    } 

    printf("\n");

    for(int j = 0; j < 5; j++) {
        alunos[j].media_final = (notas[j][0] + notas[j][1] + notas[j][2]) / 3;
    }

    for(int l = 0; l < 5; l++) {
        printf("--- Resultado do %s ---\n", alunos[l].nome);
        printf("\n");
        printf("Matricula: %d\n", alunos[l].matricula);
        printf("Média final: %.1f\n", alunos[l].media_final);
        if(alunos[l].media_final >= 7.0) {
            printf("Aprovado <3\n");
        } else {
            printf("Reprovado T-T\n");
        }
        printf("\n");
    }

    return 0;
}
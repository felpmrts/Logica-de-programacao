#include <stdio.h>

typedef struct {

    char nome[21];
    float salario;

} dados;

void reajusteSalario(dados *p, float percentual) {


    p->salario = p->salario * (1 + (percentual/100));

}

int main() {

    dados funcionario;
    float aumento;

    printf("Digite o nome do funcionário: ");
    scanf("%20[^\n]", funcionario.nome);

    printf("Digite o seu salario: R$ ");
    scanf("%f", &funcionario.salario);

    printf("Digite o aumento em percentual do seu salário : ");
    scanf("%f", &aumento);

    printf("\n\nFuncionário: %s\n", funcionario.nome);

    printf("\nAntigo salário: R$ %.2f\n", funcionario.salario);

    reajusteSalario(&funcionario, aumento);

    printf("Novo salário: R$ %.2f\n\n", funcionario.salario);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    
    char nome[11];
    int nota1;
    int nota2;
    
} dados;

void cadastro(dados *slot) { 
    
    system("clear");
    printf("\n\n====== Novo Cadastro ======\n\n");
    printf("Digite o nome: ");
    scanf(" %10[^\n]", slot->nome);
    
    // printf("Digite a nota 1: ");
    // scanf("%d", &slot->nota1);
    // printf("Digite a nota 2: ");
    // scanf("%d", &slot->nota2);
   
}

void info_usuarios(dados usuario[], int contador) {
    
    system("clear");
    
    if(contador == 0) {
        printf("Nao ha usuarios cadastrados\n");
    } else {
        printf("\n\n====== Usuários disponiveis ======\n\n");
        for(int i = 0; i < contador; i ++) {
            printf("Nome: %s\n", usuario[i].nome);
        }
    
    }
    
    char enter;
    printf("\nPressione ENTER para voltar ao menu...");
    setbuf(stdin, NULL);
    scanf("%c", &enter);
    
}

int main() {
    
    dados usuario[5];
    int contador = 0;
    
    int op = 10;
    do {
        
        system("clear");
        printf("1. Cadastrar novo usuário\n");
        printf("2. Mostrar informacoes do usuário\n");
        printf("0. Sair do programa\n");
        printf(">> ");
        scanf("%d", &op);
        
        switch(op) {
            
            case 1:
            
                if(contador < 5) {
                    cadastro(usuario + contador);
                    contador++;    
                } else {
                    system("clear");
                     printf("\nERRO: Limite máximo de cadastros (5) atingido.\n");
                    printf("\nPressione ENTER para voltar ao menu...");
                    getchar(); 
                    getchar();
                }
            
                break;
                
            case 2: 
            
                info_usuarios(usuario, contador);
            
                break;
        }
        
    } while (op != 0);

    return 0;
}
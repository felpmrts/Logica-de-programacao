#include <stdio.h>
#include <string.h>

int main() {

    char str[10];

    fgets(str, sizeof(str), stdin);
    fflush(stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("%d\n", strlen(str));

    return 0;
}

// O que fgets faz: Ela lê os caracteres do teclado e os coloca no array str. Como ela lê a linha inteira, ela inclui o caractere \n (nova linha) gerado pelo [Enter].

//Como a string fica na memória: Após a execução do fgets, o seu array str contém os seguintes valores:
//['f', 'e', 'l', 'i', 'p', 'e', '\n', '\0', ...]

// Encontra o caractere '\n' e o substitui por '\0'
// A função strcspn retorna o índice da primeira ocorrência de '\n' na string
//    str[strcspn(str, "\n")] = '\0';

// Exempĺo:
// fgets(buffer, sizeof(buffer), stdin);
// buffer[strcspn(buffer, "\n")] = '\0'; Faz a busca e a substituição de uma vez
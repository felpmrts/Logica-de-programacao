#include <stdio.h>

int main() {

    char resposta;

    do 
    {
        printf("Deseja continuar? (s/n)\n");
        scanf(" %c", &resposta);

    } while(resposta == 's');

    return 0;
}
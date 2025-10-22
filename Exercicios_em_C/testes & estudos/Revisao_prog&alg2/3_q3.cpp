#include <stdio.h>

int main() {

    int senha_correta = 1234;
    int senha_digitada = 1234;

    if(senha_digitada == senha_correta) {
        printf("Acesso permitido.\n");
    }

    return 0;
}
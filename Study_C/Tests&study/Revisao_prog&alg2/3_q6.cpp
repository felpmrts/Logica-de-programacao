#include <stdio.h>
#include <string.h>

int main() {

    char usuario_digitado[] = "admin";
    char senha_digitada[] = "senha123";

    if(strcmp(usuario_digitado, "admin") == 0) {
        if(strcmp(senha_digitada, "senha123") == 0) {
            printf("Login de Administrador Efetuado.\n");
        }
    }

    return 0;
}
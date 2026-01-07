#include <stdio.h>
#include <ctype.h>

int contagem(char *t, char *l) {

    char alvo_min = tolower(*l);
    char alvo_mai = toupper(*l);

    int soma = 0;
    while(*t != '\0') {

        if(*t == alvo_mai || *t == alvo_min) {
            soma++;

            if(*t == tolower(*l)) {
                *t = toupper(*l);
            } else if(*t == toupper(*l)) {
                *t = tolower(*l);
            }
        }

        t++;
    } 

    return soma;

}

int main() {

    char texto[22];
    char letra;
    int moda;

    printf("Digite um texto: ");
    scanf(" %20[^\n]", texto);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    moda = contagem(texto, &letra);

    printf("A letra %c aparece %dX\n", letra, moda);
    printf("\n%s\n", texto);

    return 0;
}
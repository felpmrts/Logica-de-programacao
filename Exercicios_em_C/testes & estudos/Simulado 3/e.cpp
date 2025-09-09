#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frase[500];
    scanf(" %[^\n]s", frase);

    int tamanho_menor = strlen(frase);
    char frase_menor[500];

    int l;
    for(l = 0; l < tamanho_menor; l++) {
        frase_menor[l] = tolower(frase[l]);
    }

    frase_menor[l] = '\0';

    printf("%s\n", frase_menor);
    
    char sem_lacuna[500];

    int j = 0;
    for(int i = 0; frase_menor[i] != '\0'; i++) {
        if(frase[i] != ' ') {
            sem_lacuna[j] = frase_menor[i];
            j++;
        }
    }

    sem_lacuna[j] = '\0';

    printf("%s\n", sem_lacuna);

    int tam = strlen(sem_lacuna);

    char inverter[tam +1];

    int k = 0;
    for(int l = tam - 1; l >= 0; l--) {
        inverter[k] = sem_lacuna[l];
        k++;
    }

    inverter[k] = '\0';
    
    if(strcmp(inverter, sem_lacuna) == 0) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
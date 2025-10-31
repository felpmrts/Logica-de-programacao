#include <stdio.h>
# include <string.h>

int main() {

    int numero;
    scanf("%d", &numero);

    char numero_char = numero + '0';

    char sequencia[10000];
    scanf(" %[^\n]s", sequencia);

    char nova_sequencia[10000];
    int j = 0;
    for(int i = 0; sequencia[i] != '\0'; i++) {
        if(sequencia[i] != numero_char) {
            nova_sequencia[j] = sequencia[i];
            j++;
        }
        
    }

    nova_sequencia[j] = '\0';

    int k = strlen(nova_sequencia);

    if(nova_sequencia[0] == '\0') {
        printf("0\n");
    } else if (nova_sequencia[0] == '0' && nova_sequencia[k - 1] == '0') {
        printf("0\n");
    } else {
        
    }

    return 0;
}
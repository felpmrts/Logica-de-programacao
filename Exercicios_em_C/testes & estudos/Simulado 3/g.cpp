#include <stdio.h>
#include <string.h>

int main() {

    int numero;
    scanf("%d", &numero);

    char v[10000];
    scanf("%s", v);

    char caracter_remover = numero + '0';

    char c[10000];
    int j = 0;
    for(int i = 0; i < strlen(v); i++) {
        if(caracter_remover != v[i]) {
            c[j] = v[i];
            j++;
        }
    }

    c[j] = '\0';


  if (j == 0) {
            printf("0\n");
        } else {
           
            int indice_inicial = 0;

            while (c[indice_inicial] == '0' && indice_inicial < j - 1) {
                indice_inicial++;
            }
            
            printf("%s\n", &c[indice_inicial]);
        }
    }


    return 0;
}
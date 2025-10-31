#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char frase[1001];
    scanf(" %1000[^\n]", frase);

    long long int cont_frase = 0;
    long long int cont_acentos = 0;
    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] >= 'a' && frase[i] <= 'z' || frase[i] >= 'A' && frase[i] <= 'Z' || frase[i] == ' ' || frase[i] >= '0' && frase[i] <= '9') {
            cont_frase++;
        } else {
            cont_acentos++;
        }
        
    }

    long long int tam_real = cont_frase + (cont_acentos - 1);

    if(cont_acentos > 0) {
        printf("%lld\n", tam_real);
    } else {
        printf("%lld\n", cont_frase);
    }
    

    return 0;
}
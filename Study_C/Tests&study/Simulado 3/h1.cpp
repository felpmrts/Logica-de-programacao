#include <stdio.h>
#include <string.h>

int main() {

    char frase[1001];
    scanf("%[^\n]", frase);

    int contador_frase = 0;
    int contador_acentos = 0;
    for(int i = 0; frase[i] != '\0'; i++) {
        if(frase[i] > 0) {
            contador_frase++;
        } else {
            contador_acentos++;
        }
    }

    long long int tam_real = contador_frase + (contador_acentos - (1 * (contador_acentos)) / 2);

    if(contador_acentos > 0) {
        printf("%lld\n", tam_real);
    } else {
        printf("%d\n", contador_frase);
    }
    

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char str[15];
    long long int linhas;

    scanf("%lld", &linhas);

    int i;
    for(i = 0; i < linhas; i++) {
        scanf("%s", str);

        char nu1[3];
        nu1[0] = str[2];
        nu1[1] = str[3];
        nu1[2] = '\0';

        char nu2[4];
        nu2[0] = str[5];
        nu2[1] = str[6];
        nu2[2] = str[7];
        nu2[3] = '\0';

        char nu3[3];
        nu3[0] = str[11];
        nu3[1] = str[12];
        nu3[2] = '\0';

        int n1 = atoi(nu1);
        int n2 = atoi(nu2);
        int n3 = atoi(nu3);
        int soma = n1 + n2 + n3;

        printf("%d\n", soma);

    }

    
    return 0;
}
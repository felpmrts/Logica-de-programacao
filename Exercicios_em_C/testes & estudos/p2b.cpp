#include <stdio.h>

int main() {

    long long int linhai, colunai, l, c;

    scanf("%lld %lld", &linhai, &colunai);

    long long int m[linhai][colunai];

    for(l = 0; l < linhai; l++) {
        for(c = 0; c < colunai; c++) {
            scanf("%lld", &m[l][c]);
        }
    }


    for(l = 0; l < colunai; l++) {
        for(c = 0; c < linhai; c++) {
            if(c < linhai - 1) {
                printf("%lld ", m[c][l]);
            } else {
                printf("%lld", m[c][l]);
            }
            
        }
        printf("\n");
    }

    return 0;
}
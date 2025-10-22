#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

typedef struct {

    float preço;
    char local[51];

} info;

int main() {

    setlocale(LC_ALL, "Portuguese");

    info op[4];

    for(int i = 0; i < 4; i++) {
        scanf("%f", &op[i].preço);
        scanf(" %[^\n]s", op[i].local);
    }

    int j = 0;
    for(int i = 0; i < 4; i++) {
        if(op[j].preço > op[i].preço) {
            j = i;
        }
    }

    printf("%.2f %s\n", op[j].preço, op[j].local);
    

    return 0;
}

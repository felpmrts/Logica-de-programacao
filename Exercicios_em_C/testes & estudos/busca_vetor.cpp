#include <stdio.h>

int main() {

    int v[10], i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    int input, j, k, verificador = 0;
    scanf("%d", &input);

    for(j = 0; j < 10; j++){
        if(v[j] == input) {
            verificador++;
        };
    }
    
    if(verificador > 0) {
        printf("%d\n", verificador);

        for(k = 0; k < 10; k++) {
            if(v[k] == input) {
                printf("%d ", k);
            }
        }

    } else {
        printf("Mia x\n");
    }

    return 0;
}
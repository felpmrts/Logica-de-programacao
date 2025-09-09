#include <stdio.h>
#include <string.h>

int main() {

    int vezes;
    scanf("%d", &vezes);

    for(int j = 0; j < vezes; j++) {

    int move;
    scanf("%d", &move);

    char crip[1001];
    scanf(" %[^\n]s", crip);

    char descrip[1001];
    int i;
    for(i = 0; crip[i] != '\0'; i++) {
        if(crip[i] + move > 'Z') {
            descrip[i] = crip[i] + move - 26;
        } else if(crip[i] + move < 'A') {
            descrip[i] = crip[i] + move + 26;
        } else {
            descrip[i] = crip[i] + move;
        }
        
    }

    descrip[i] = '\0';

    printf("%s\n", descrip);

    }

    return 0;
}
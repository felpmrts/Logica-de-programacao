#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {


    int move;
    scanf("%d", &move);

    int positive_move = abs(move);

    char cript[1001];
    scanf(" %[^\n]s", cript);

    char descript[1001];
    int j = 0;
    for(int i = 0; cript[i] != '\0'; i++) {
    
            if(cript[i] + positive_move > 'Z') {
                descript[i] = cript[i] + positive_move - 26;  
            } else {
                descript[i] = cript[i] + positive_move;
            }
        j++;

    }

    descript[j] = '\0';

    printf("%s\n", descript);

    
    return 0;
}
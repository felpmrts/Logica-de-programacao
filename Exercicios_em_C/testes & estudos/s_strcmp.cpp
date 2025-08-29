#include <stdio.h>
#include <string.h>

/* int main() {

    char a[30];
    char b[30];

    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';


    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    if(strcmp(a, b) == 0) {
        printf("Sao iguais\n");
    }

    if(strcmp(a, b) == 1) {
        printf("segunda menor\n");
    }

    if(strcmp(a, b) == -1) {
        printf("Primeira menor\n");
    }

    return 0;
}
*/

int main(){
    char n1[20];
    char n2[20];

    scanf("%s %s", n1, n2);

    if(strcmp(n1, n2) == 0){
        printf("strings iguais\n");
    }
    if(strcmp(n1, n2) == -1){
        printf("primeira menor\n");
    }
    if(strcmp(n1, n2) == 1){
        printf("segunda menor\n");
    }
}

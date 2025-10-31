#include <stdio.h>
#include <string.h>

/* int main() {

    char nome[20] = "abcd";
    printf("%d\n", strlen(nome));

}
*/

/*
int main() {

char a[10] = "abcd";
char b[10];

strcpy(b, a); //b recebe a
printf("%s\n", b); //Imprime "abcd"

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

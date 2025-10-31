#include <stdio.h>
#include <string.h>

int main() {

    char a[20];

    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    fflush(stdin);

    if(strstr(a, "li") == NULL) printf("Nao tem\n");
    else (printf("Tem\n"));

    return 0;
}
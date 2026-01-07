#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void new_strcat(char string1[11], char string2[11]) {

    char string_concatenada[22];
    int contador_1 = 0;

    for(int i = 0; string1[i] != '\0'; i++) {
        string_concatenada[i] = string1[i];
        contador_1++; 
    }

    int contador_2 = 0;

    for(int i = 0; string2[i] != '\0'; i++) {
        string_concatenada[contador_1 + i] = string2[i];
        contador_2++;
    }

    string_concatenada[contador_1 + contador_2] = '\0';

    printf("A concatenacao fica: %s\n", string_concatenada);

}

int main() {

    printf("\n\n");
    char string1[11], string2[11];

    printf("Escreva a primeira string: ");
    scanf("%[^\n]", string1);

    setbuf(stdin,NULL);

    printf("Escreva a segunda string: ");
    scanf("%[^\n]", string2);

    new_strcat(string1, string2);

    return 0;
}
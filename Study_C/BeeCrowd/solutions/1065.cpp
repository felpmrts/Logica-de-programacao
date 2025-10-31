#include <stdio.h>

int main() {

   int input;
   int contador_pares = 0;
   int i;

   for(i = 0; i < 5; i++) {
        scanf("%d", &input);
    
        if(input % 2 == 0) {
        contador_pares++;
        }        
   }

   printf("%d valores pares\n", contador_pares);

    return 0;
}
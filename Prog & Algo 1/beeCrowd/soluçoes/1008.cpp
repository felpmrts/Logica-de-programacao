#include <stdio.h> 
#include <stdlib.h>

int main () {

   int NUMBER, HORAS;
   float BANDEIRA;
   
   scanf("%d", &NUMBER);
   scanf("%d", &HORAS);
   scanf("%f", &BANDEIRA);

   float SALARIO = BANDEIRA*HORAS;

   printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARIO);


    return 0;
}
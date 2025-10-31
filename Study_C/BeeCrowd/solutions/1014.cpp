#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float distancia, combustivel, consumo;

    scanf("%f %f", &distancia, &combustivel);

    consumo = distancia/combustivel;

    printf("%.3f km/l\n", consumo);


    return 0;
}
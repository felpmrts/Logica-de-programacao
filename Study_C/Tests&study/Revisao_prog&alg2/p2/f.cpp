#include <stdio.h>

typedef struct {

    int altura;
    int largura;

} retangulo;

int calcular_area(retangulo *p) {

    int area;

    area = p->altura * p->largura;

    return area;

}

int main() {

    retangulo a;
    int area;

    printf("Digite o tamanho das dimensões do retangulo (altura/largura):\n");
    scanf("%d", &a.altura);
    scanf("%d", &a.largura);

    printf("A area desse retangulo eh: %d m²\n", area = calcular_area(&a));

    return 0;
}
#include <stdio.h>

void convert(int seg) {

    int horas, minutos, segundos;

    horas = seg / 3600;
    minutos = (seg % 3600) / 60;
    segundos = (seg % 3600) % 60;


    printf("O valor convertido eh: %02d:%02d:%02d\n", horas, minutos, segundos);

}

int main() {

    printf("\n\n");
    int segundos;

    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    convert(segundos);

    return 0;
}
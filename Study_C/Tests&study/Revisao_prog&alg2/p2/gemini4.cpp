#include <stdio.h>

void decompoe_tempo(int input, int *s, int *m, int *h) {

    *h = input / 3600;
    *m = (input % 3600) / 60;
    *s = (input % 3600) % 60;

}

int main() {

    int input, segundos, minutos, horas;

    printf("Digite os segundos: ");
    scanf("%d", &input);

    decompoe_tempo(input, &segundos, &minutos, &horas);
    printf("Logo, temos: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
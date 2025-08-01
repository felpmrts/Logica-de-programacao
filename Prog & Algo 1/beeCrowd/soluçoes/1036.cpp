#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, raiz1, raiz2, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;
    

    if(a != 0 && delta > 0) {

        raiz1 = (- b + sqrt(delta))/(2 * a);
        raiz2 = (- b - sqrt(delta))/(2 * a);

        printf("R1 = %.5lf\n", raiz1);
        printf("R2 = %.5lf\n", raiz2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
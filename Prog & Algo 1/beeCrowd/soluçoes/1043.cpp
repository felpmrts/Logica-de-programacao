#include <stdio.h>

int main() {

    double a, b ,c ;
    
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a < b+c && b < a+c && c < a+b) {
        double perimetro;

        perimetro = a+b+c;
        printf("Perimetro = %.1lf\n", perimetro);

    } else {
        double areat;

        areat = ((a+b)*c)/2;
        printf("Area = %.1lf\n", areat);
    }

    return 0;
}
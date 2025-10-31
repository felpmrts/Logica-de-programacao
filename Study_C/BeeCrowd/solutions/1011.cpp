#include <stdio.h> 
#include <stdlib.h>

int main () {

    double R;
    double const pi = 3.14159;
    double volume;

    scanf("%lf", &R);

    volume = (4.0/3.0) * pi * (R * R *R);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
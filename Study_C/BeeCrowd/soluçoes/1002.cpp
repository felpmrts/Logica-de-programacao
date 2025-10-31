#include <stdio.h>

int main() {

    double R;
    scanf("%lf", &R);

    double const pi=3.14159;
    double area = pi*(R*R);

    printf("A=%.4lf\n", area);

    return 0;
}

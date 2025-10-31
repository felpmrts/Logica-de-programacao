#include <stdio.h>
#include <stdlib.h>
 
int main() {

    double A;
    scanf("%lf", &A);

    double B;
    scanf("%lf", &B);

    double const MEDIA = (3.5*A + 7.5*B)/11; 

    printf("MEDIA = %.5lf\n", MEDIA);


 
    return 0;
}
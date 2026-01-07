#include <stdio.h>

void estatistica(double *vetor, double *minimo, double *max, double *media) {

    double *p;
    p = vetor;

    int i = 0; // andador
    int k = 0; // minimo
    for(p = vetor; p < vetor + 3; p++) {
        

        p = p - i + k;
        
        if((*p) < (*p)) {

            k = i;
        }
        i++;

        
    }

    *minimo = *(vetor + k);

}

int main() {

    double vetor[] = {3.5, 2.5, 5.5, 4.5};

    double minimo, maximo, media;

    estatistica(vetor, &minimo, &maximo, &media);

    printf("O valor mínimo %.1lf\n", minimo);


    return 0;
}
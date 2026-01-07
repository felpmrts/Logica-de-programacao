#include <stdio.h>

int main() {

    int vetor[] = {1, 2, 3, 4, 5};
    int *I, *F;

    I = vetor;
    F = vetor + 4;

    while(I <= F) {

        if(I < F) {
            printf("%d ", *(I));
            printf("%d ", *(F));
        } else {
            printf("|meio: %d\n", *(I));
        }
        
        I++;
        F--;
    }

    return 0;
}
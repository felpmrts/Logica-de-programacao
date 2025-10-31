#include <stdio.h>

int main() {

    int i;

    // for(inicialização; condição; incremento){
	//      Código
    // }

    for(i = 0; i < 101; i+= 2) {
        if(i != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
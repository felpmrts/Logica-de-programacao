#include <stdio.h>
#include <stdlib.h>

typedef struct {
    
    int x = 0;
    int y = 0;

} ponto;

void moverJogador(ponto *p) {

    char direcional;

    do {

        setbuf(stdin,NULL);
        scanf(" %c", &direcional);
        
        if(direcional == 'd' || direcional == 'D') {
            p->x = p->x + 1;
        } else if(direcional == 'a' || direcional == 'A') {
            p->x = p->x - 1;
        } else if(direcional == 'w' || direcional == 'W') {
            p->y = p->y + 1;
        } else if(direcional == 's' || direcional == 'S') {
            p->y = p->y - 1;
        }

        printf("(%d,%d)\n", p->x, p->y);
          

    } while (direcional != 'f' && direcional != 'F');

}

int main() {

    system("clear");
    ponto coordenadas;

    printf("\n\n=== Posição ===\n\n");
    printf("(%d,%d)\n", coordenadas.x, coordenadas.y);

    moverJogador(&coordenadas);

    return 0;
}
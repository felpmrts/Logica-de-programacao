#include <stdio.h>

int main() {

    /*
      #caracteres especiais
      \n -> Nova linha, isto é, uma quebra de linha.
      \t -> Tabulação, isto é, acontece uma criação de um espaço no códico, como dar um tab no teclado.
      \\ -> Duas barras escreve no código uma barra no printf.
      %% -> Dois porcento escreve o porcento no printf.

      #Alinhamento
      %xd -> Alinhamento a direita com x espaços. e %0[x]d -> Alinhamento a direita com x espaços e completa com zeros.
      %-xd -> Alinhamento a esquerda com x espaços.

      #Definir precisão
      %.xf -> Define precisão

    */
    int A = 111;
    printf("%-10d", A);

}
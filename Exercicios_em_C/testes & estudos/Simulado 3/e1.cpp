#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para remover acentos e converter para minúsculo
// Retorna o caractere normalizado ou 0 se não for uma letra
char normalizarCaractere(unsigned char c) {
    // Tabela de conversão para caracteres acentuados comuns em português
    // e o c-cedilha.
    const unsigned char* originais[] = {
        (const unsigned char*)"áàâã", (const unsigned char*)"éê", (const unsigned char*)"í",
        (const unsigned char*)"óôõ", (const unsigned char*)"ú", (const unsigned char*)"ç",
        (const unsigned char*)"ÁÀÂÃ", (const unsigned char*)"ÉÊ", (const unsigned char*)"Í",
        (const unsigned char*)"ÓÔÕ", (const unsigned char*)"Ú", (const unsigned char*)"Ç"
    };
    const char substitutos[] = "aeioucaeiouc";

    for (int i = 0; i < 12; i++) {
        if (strchr((const char*)originais[i], c)) {
            return substitutos[i];
        }
    }

    // Se for uma letra normal (a-z), converte para minúsculo
    if (isalpha(c)) {
        return tolower(c);
    }
    
    // Se não for letra nem acento conhecido, ignora
    return 0; 
}


// Função para verificar se uma string é um palíndromo
void verificaPalindromo(char frase[]) {
    char frase_limpa[501]; // Armazena a frase normalizada
    int j = 0; // Índice para a frase_limpa

    // 1. Loop para "limpar" a frase original
    for (int i = 0; frase[i] != '\0'; i++) {
        char caractere_normalizado = normalizarCaractere(frase[i]);
        if (caractere_normalizado != 0) {
            frase_limpa[j] = caractere_normalizado;
            j++;
        }
    }
    frase_limpa[j] = '\0'; // Finaliza a string limpa

    // 2. Verificação do palíndromo usando dois ponteiros
    int eh_palindromo = 1; // Começamos assumindo que é um palíndromo
    int esquerda = 0;
    int direita = strlen(frase_limpa) - 1;

    while (esquerda < direita) {
        if (frase_limpa[esquerda] != frase_limpa[direita]) {
            eh_palindromo = 0; // Se encontrar uma diferença, não é palíndromo
            break; // Pode parar a verificação
        }
        esquerda++;
        direita--;
    }

    // 3. Imprime o resultado
    if (eh_palindromo) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }
}

int main() {
    char frase[501]; // Cada frase tem até 500 caracteres [cite: 11]

    // O laço continua lendo frases até o final da entrada (EOF)
    while (fgets(frase, sizeof(frase), stdin) != NULL) {
        verificaPalindromo(frase);
    }

    return 0;
}
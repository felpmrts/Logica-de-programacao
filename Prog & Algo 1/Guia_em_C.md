# Guia básico de aprendizado & resumo para linguagem C.

### Para iniciar um programa é necessario incluir alguma biblioteca que irá ser utilizada :

Exemplos :

1. stdio.h
2. math.h

_Adicionando:_

#include <stdio.h>

---

### Para seu programa ser executado é necessario adicionar uma função principal :
<br>

Exemplo:

```
int() main {

    return 0;
}
```
<br>

- **Portanto, a estrutura mais comum é representada assim :**

<br>

```
#include <stdio.h>

int main() {

    // Seu código

    return 0;
}
```

<br>

Note que as linhas de código deverão estar dentro da função principal.  
Obs: C é uma linguagem _**Procedural**_. Nesse sentido, o código irá ser lido por etapas, isto é, linha por linha.

---

### Definindo variáveis:
Ao desenvolver algum programa, provavelmente, será utilizado diferentes variáveis. Em C, temos:

1. **int** ( inteiros )  
<br>
   1. **long** --> _quando extrapola a quantidade de bits do int_
   2. **long long** --> _quando extrapola mais a quantidade de bits do int_

<br>

2. **float** ( ponto flutuante )
3. **double** ( ponto flutuante ) --> _mais preciso_ 
4. **char** ( caractere )

<br>

**Definição de variável :**

`<tipo> <nome_variável>;`

Exemplo:

```
int variavel_1;
float variavel_2;
char variavel_3;
```

**Recepção da variável :**

**Tipo**|**Recepção**
:-:|:-:
int|%d
float| %f
double| %lf
char | %c ou %s

---

### Definindo constante:

Constantes são usados para definir um valor estático à uma "variável".

`const <tipo> <variavel> = <valo>;`

<br>

**Exemplo :**

```
const int teste = 145;
``` 
<br>

---

### Algumas ferramentas da biblioteca _**stdio.h**_ :

 ```
    printf("Hello World");
    scanf("%d", &variavel_a);
```
<br>

---

### Algumas estruturas de algorítimos:

**Exemplos :**  

_if & else_  
_if else if_  
_switch_    
_operadores lógicos (&& e ||)_  
_while_  
_dowhile_  
_for_

---





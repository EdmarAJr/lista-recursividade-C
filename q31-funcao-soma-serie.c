#include <stdio.h>
#include <stdlib.h>

/*31) Escreva, usando a linguagem C, uma funcao recursiva, SomaSerie(i,j,k: inteiro): inteiro, que devolva a soma da serie de valores do intervalo [i,j], com incremento k.*/

/*soma i a k ate que i seja maior que j*/
int somaSerie(int i, int j, int k) {
    // Caso base: se i for maior que j, retorna 0
    if (i > j) {
        return 0;
    }
    // Caso recursivo: soma o valor atual i e chama a função com i incrementado por k
    return i + somaSerie(i + k, j, k);
}

int main() {
    int i = 3, j = 8, k = 3;
    
    printf("Soma da série de %d a %d com incremento de %d eh: %d\n", i, j, k, somaSerie(i, j, k));
    return 0;
}

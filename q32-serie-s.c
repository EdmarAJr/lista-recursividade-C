#include <stdio.h>
#include <stdlib.h>

/* 32) Faça uma funcao recursiva, em linguagem C, que calcule o valor da serie S descrita a seguir para um valor
n>0 a ser fornecido como parametro para a mesma.

		S = (1 + 1^2)/1 = 2 + 5/2 + 10/3 + ... + (1 + n^2) / n
*/


float serie_S(int n) {
    // Verifica se n eh menor que 1 e retorna -1 (indicando um erro ou condicao invalida)
    if (n < 1) return -1;

    // Caso base: se n for 1, retorna (1 + 1^2) / 1 = 2
    if (n == 1) return (1 + n * n) / (float)n;

    // Calculo recursivo 
    return (1 + n * n) / (float)n + serie_S(n - 1);//cast para converter inteiro para float
}

int main() {
    int n = 2;
    printf("%.2f\n", serie_S(n));  //4.50
    return 0;
}

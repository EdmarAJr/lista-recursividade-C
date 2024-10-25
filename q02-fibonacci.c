#include <stdio.h>
#include <stdlib.h>

/*2) Faca uma funcao recursiva que calcule e retorne o N-esimo termo da sequencia Fibonacci. Alguns numeros desta sequencia sao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/ 

/*0 1 1 2 3 5 8 13*/
int fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n =6;

    printf("Sequência de Fibonacci ateh %d termos eh: %d\n", n, fibonacci(n));

    return 0;
}

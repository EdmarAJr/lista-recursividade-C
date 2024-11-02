#include <stdio.h>
#include <stdlib.h>

/* 43) Uma sequencia de Fibonacci generalizada, de f0 a f1 eh definida como
fibg(f0, f1, 0), fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
fibg(f0, f1, 0) = f0
fibg(f0, f1, 1) = f1
fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1.
Escreva uma funcao recursiva em C para calcular fibg(f0, f1, n).*/

int fibonacciGeral(int f0, int f1, int n){
	if(n < 0) return -1;
	if(n == 0) return f0;
	if(n == 1) return f1;
	return fibonacciGeral(f0, f1, n - 1) + fibonacciGeral(f0, f1, n - 2);
}
int main(){
    int f0 = 3, f1 = 5, n = 6;//55
    printf("resultado: %d",fibonacciGeral(f0, f1, n));
    return 0;
}

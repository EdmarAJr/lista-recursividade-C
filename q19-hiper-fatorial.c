#include <stdio.h>
#include <stdlib.h>


/*19) O hiperfatorial de um numero N, escrito H(n), eh definido por H(n) = 1! * 2! * 3! * ... * (n-1)! * n! ( Por exemplo, o hiperfatorial de 5 eh 5^5!). Faca uma funcao recursiva que receba um numero inteiro positivo N e retorne o hiperfatorial desse numero.*/ 


int hiperFat(int n) {
	if(n<=1) return 1;
	int fat(int n, int k) {
		if(k==1) return n;
		return n*fat(n, k-1);
	}
	return hiperFat(n-1)* fat(n, n);
}

int main(){
    int x = 4;
    
    printf("O hiper fatorial de %d eh: %d\n", x, hiperFat(x));
    return 0;
}

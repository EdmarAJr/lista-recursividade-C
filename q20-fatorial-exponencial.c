#include <stdio.h>
#include <stdlib.h>


/*20) Um fatorial exponencial eh um inteiro positivo N elevado a potencia de N-1, que por sua vez eh elevado a potencia de N-2 e assim em diante. Ou seja: n^(n-1)^(n-1).... Faca uma funcao recursiva que receba um numero inteiro positivo N e retorne o fatorial exponencial desse numero.*/ 

int fatExp(int n) {
	if(n==0) return 0;
	if(n==1 || n==2) return n;
	
	int fat(int n, int k) {
		if(k==1) return n;
		return fat(n *fat(n, k-1), k-1);
	}
	return fat(n, n-1);
}
int main(){
  int x = 3;
    
    printf("O fatorial exponencial de %d eh: %u\n", x, fatExp(x));
    return 0;
}

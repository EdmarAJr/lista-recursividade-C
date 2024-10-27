#include <stdio.h>
#include <stdlib.h>

/*17) O fatorial quadruplo de um numero N eh dado por (2n)!/n!. Faca uma funcao recursiva que receba um numero inteiro positivo N e retorne o fatorial quadruplo desse numero.*/ 

/*definicao da questao sobre fatorial quadruplo*/
int fatorialQuadruplo(int n) {
	int fat(int n, int k) {
		if(n == k) {
			return  k;
		}
		return n * fat(n - 1, k);
	}
	return fat(2 * n, n + 1);
}

/*definicao formal*/

int fatQ(int n) {
	if(n<=1) return 1;
	
	return n*fatQ(n-4);
}


int main(){
    int x = 6;
    
    printf("O quadruplo fatorial de %d eh: %d\n", x, fatorialQuadruplo(x));
    printf("O quadruplo fatorial de %d eh: %d\n", x, fatQ(x));
    return 0;
}

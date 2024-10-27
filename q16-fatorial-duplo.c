#include <stdio.h>
#include <stdlib.h>


/*16) A funcao fatorial duplo eh definida como o produto de todos os numeros naturais impares de 1 ate algum numero natural impar N. Assim, o fatorial duplo de 5 eh 5!! = 1 * 3 * 5 = 15. Faca uma funcao recursiva que receba um numero inteiro positivo impar N e retorne o fatorial duplo desse numero.*/ 

int duploFat(int n) {
	if(n==1 || n==0) {
		return 1;
	}
	return n * duploFat(n - 2);
}


/*ou*/

int duploFat2(int n) {
	if(n==1 || n==0) return 1;
		return n *duploFat2(n-2);
}
int main(){
    int x=5;//15
    
    printf("O duplo fatorial de %d eh: %d\n", x, duploFat(x));
    printf("O duplo fatorial de %d eh: %d\n", x, duploFat2(x));
    return 0;
}

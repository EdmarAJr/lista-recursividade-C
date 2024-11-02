#include <stdio.h>
#include <stdlib.h>

/* 44) Escreva uma funcao recursiva que calcule a soma dos primeiros n cubos:
S(n) = 1^3 + 2^3 + ... + n^3 */

int sCubo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return n*n*n+sCubo(n-1);
    
}

/*ou*/

int sCubo2(int n){
	int interna(int i, int j, int n, int soma){
		if(j > n) return soma;
		soma  += i * i * i;
		return interna(i + 1, j + 1, n, soma);
	}
	int i = 0; int soma = 0; int j = 0;
	return interna(i, j, n, soma);
}

int main(){
    int n =3;
    printf("O %dº cubo eh: %d", n, sCubo(n));
    printf("\n");
    printf("O %dº cubo eh: %d", n, sCubo2(n));
    return 0;
}

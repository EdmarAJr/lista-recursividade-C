#include <stdio.h>
#include <stdlib.h>

/*27) Desenvolva algoritmos recursivos para cada um dos seguintes problemas:*/

/*a) Impressao de um numero natural em base binaria*/

int imprimirBin(int n){
    if(n==0) return 0;
    imprimirBin(n/2);
    printf("%d", n%2);
}

/*ou*/

void binario(int n) {
	int nBits = 1;
	int m = n;
	while(m > 1) {   /* Calcula quantidade de bits do numero n*/
		nBits++;
		m /= 2;
	}

	int * interna(int n, int i, int * vet) {
		if(n < 2) {
			vet[i] = n;
			return vet;
		}
		vet[i] = (n % 2);
		return interna(n / 2, i + 1, vet);
	}

	int i = 0;
	int v[nBits];
	int * vetor = interna(n, i, v);

	int j;
	for(j = nBits - 1; j >= 0; j--) {
		printf("%d",vetor[j]);
	}
}

int main(){
    int x=15;
    if (x == 0) printf("%d", 0);
      else 
        imprimirBin(x);
        printf("\n");
        binario(x);
    return 0;
}

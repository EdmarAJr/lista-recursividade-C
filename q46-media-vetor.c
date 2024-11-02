#include <stdio.h>
#include <stdlib.h>

/* 46) Faca uma funcao recursiva que permita calcular a media um vetor de tamanho N. */

float media(int vet[], int tam, int i) {
    if (i == tam) return 0;
    if (i == 0) return (vet[i] + media(vet, tam, i + 1)) / tam;
    return vet[i] + media(vet, tam, i + 1);
}

/*ou*/

float media2(int vet[], int n){
	float interna(int vet[], int n, int aux, float soma){
		if(n < 0) return soma / aux;
		soma += vet[n];
		return interna(vet, n - 1, aux, soma);
	}
	int soma = 0.0;
	return interna(vet, n - 1, n, soma);
}

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    printf("Media do vetor: %.2f\n", media(vet, 5, 0));
    printf("Media do vetor: %.2f\n", media2(vet, 5));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*4) Faca uma funcao recursiva que permita somar os elementos de um vetor de inteiros*/  
int somarVetor(int v[], int tam) {
    // Caso base: quando o tamanho for 0, retorne 0
    if (tam == 0) return 0;

    // Soma o ultimo elemento do vetor com a soma dos anteriores
    return v[tam - 1] + somarVetor(v, tam - 1);
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5}; //15
    printf("A soma dos elementos eh: %d\n", somarVetor(vetor, 5));
    return 0;
}

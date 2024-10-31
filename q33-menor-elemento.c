#include <stdio.h>
#include <stdlib.h>

/*33) Crie um programa em C, que contenha uma funcao recursiva para encontrar o 
menor elemento em um vetor. A leitura dos elementos do vetor e impressao do menor 
elemento devem ser feitas no programa principal. */

int menorElemento(int vet[], int tam) {
    int proc(int v[], int i, int tam, int menor) {
        if (i == tam) return menor;
        if (v[i] < menor) menor = v[i];
        return proc(v, i + 1, tam, menor);
    }
    return proc(vet, 1, tam, vet[0]);
}

/*ou*/

int menorElemento2(int v[], int i, int tam, int menor) {
    if (i==tam) return menor;
    if (v[i]<menor) menor=v[i];
    return menorElemento2(v, i+1, tam, menor);
}

int main() {
    int tam;
    printf("Informe o tamanho do array: ");
    scanf("%d", &tam);
    
    int vet[tam]; 
    
    for (int i = 0; i < tam; i++) {
        printf("Informe o elemento do array %d/%d: ", i + 1, tam);
        scanf("%d", &vet[i]);
    }
    
    printf("O menor elemento do vetor eh: %d\n", menorElemento(vet, tam));
    printf("O menor elemento do vetor eh: %d\n", menorElemento2(vet, 0, tam, vet[0]));
    
    return 0;
}

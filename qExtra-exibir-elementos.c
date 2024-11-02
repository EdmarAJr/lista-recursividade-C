#include <stdio.h>
#include <stdlib.h>

/* extra) Escreva uma funcao recursiva em C que exibe todos os elementos em um array de inteiros, separados por espaço.*/

void imprimirVetor(int v[], int i, int tam){
    if (i == tam-1) {
        printf("%d", v[i]);
        return;
    }
    printf("%d - ", v[i]);
    imprimirVetor(v, i+1, tam);
}


int main(){
    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    
    imprimirVetor(vetor, 0, 10);
    return 0;
}

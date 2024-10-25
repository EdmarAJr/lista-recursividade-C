#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*7) Crie um programa em C que receba um vetor de numeros reais com 100 elementos. Escreva uma funcao recursiva que inverta ordem dos elementos presentes no vetor.*/  
int inverter(int v[], int tam){
    if (tam <= 1) return 0;

    // Troca o primeiro e o ultimo elemento
    int temp = v[0];
    v[0] = v[tam - 1];
    v[tam - 1] = temp;

    // Chama a funcao recursivamente para inverter o restante do vetor
    // Usando o ponteiro para avancar no vetor e o tamanho decrementado
    return inverter(v + 1, tam - 2);
}

int main(){
    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    
    printf("Vetor antes da inversao: ");
    for(int i=0; i<10;i++){
        printf("%d ", vetor[i]);
    }
    printf("\nVetor apos a inversao: ");
    inverter(vetor, 10);
    for(int i=0; i<10;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}

//ou

void inverter(int v[], int i, int tam){
    if (i>=tam/2) return;

    // Troca o primeiro e o ultimo elemento
    int temp = v[i];
    v[i] = v[tam-1-i];
    v[tam-1-i] = temp;

    // Chama a funcao recursivamente para inverter o restante do vetor
    // Usando o ponteiro para avancar no vetor e o tamanho decrementado
    inverter(v, i+1, tam);
}

int main(){
    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    
    printf("Vetor antes da inversao: ");
    for(int i=0; i<10;i++){
        printf("%d ", vetor[i]);
    }
    printf("\nVetor apos a inversao: ");
    inverter(vetor, 0, 10);
    for(int i=0; i<10;i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}




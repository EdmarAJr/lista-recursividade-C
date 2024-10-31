#include <stdio.h>
#include <stdlib.h>

/*34) Escreva, usando a linguagem C, uma funcao recursiva, ImprimeSerie(i,j,k: inteiro), 
que imprime na tela a serie de valores do intervalo [i,j], com incremento k.*/

void imprimeSerie(int i, int j, int k){
    if(i<=j) {
        printf("%d ", i);
        imprimeSerie(i+k, j, k);
    } else return;    
}

int main(){
    int i=-1, j=3, k=3;
    if(j<i) printf("\nIntervalo invalido\n");
    else imprimeSerie(i,j,k);
    
    return 0;
}

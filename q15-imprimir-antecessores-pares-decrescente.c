#include <stdio.h>
#include <stdlib.h>

/*15) Faca uma funcao recursiva que receba um numero inteiro positivo par N e imprima todos os numeros pares de 0 ate N em ordem decrescente.*/ 

int imprimir(int n){
    if(n<0)return 0;
    if(n%2==0 ) {
        printf("%d ", n);
    }
    imprimir(n-1);
}

int main(){
    int n=5;
    imprimir(n);
   
    return 0;
}

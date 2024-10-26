#include <stdio.h>
#include <stdlib.h>

/*12) Faca uma funcao recursiva que receba um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem crescente.*/ 

int imprimir1(int n){
    if(n==0) {
    printf("%d ", n);
    return 0;
    }   
    imprimir1(n-1);
    printf("%d ", n);
}

/*ou*/

void imprimir2(int n){
    if(n==0){
    printf("%d ", n);
    } else { 
        imprimir2(n-1);
        printf("%d ", n);
    }
}

/*ou*/

void imprimir3(int n){
    if(n>0) imprimir3(n-1);
    printf("%d ", n);
}

/*ou*/

int imprimir4(int n){
	if(n>0) imprimir4(n-1);
	printf("%d ", n);
}

int main(){
    int n = 5;
    imprimir1(n);
    printf("\n");
    imprimir2(n);
    printf("\n");
    imprimir3(n);
    printf("\n");
    imprimir4(n);
    //printf("%d", imprimir(n));//para int
   
    return 0;
}

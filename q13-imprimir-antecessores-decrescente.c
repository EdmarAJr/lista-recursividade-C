#include <stdio.h>
#include <stdlib.h>

/*13) Faca uma funcao recursiva que receba um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N em ordem decrescente.*/ 

int imprimir(int n){
    if(n<0)return 0;
   
    printf("%d ", n);
    imprimir(n-1);
}

/*ou*/

int imprimir_2(int n){
    if(n==0) {
        printf("%d ", n);   
    return 0;
    }
    printf("%d ", n);
    imprimir(n-1);
}

/*ou*/

void imprimir_3(int n){
    if(n==0) {
        printf("%d ", n);   
        return;
    }
    printf("%d ", n);
    imprimir(n-1);
}

/*ou*/

int imprimir_4(int n){
    if(n>0) {
        printf("%d ", n);   
        imprimir(n-1);
    } else {
        printf("%d ", n);
        return 0;
    }
}

// /*ou*/

int imprimir_5(int n){
	printf("%d ", n);
	if(n>0) imprimir(n-1);
}

int main(){
    int n = 5;
    imprimir(n);
    printf("\n");
    imprimir_2(n);
    printf("\n");
    imprimir_3(n);
    printf("\n");
    imprimir_4(n);
    printf("\n");
    imprimir_5(n);
   
    return 0;
}

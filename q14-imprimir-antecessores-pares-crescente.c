#include <stdio.h>
#include <stdlib.h>

/*14) Faca uma funcao recursiva que receba um numero inteiro positivo par N e imprima todos os numeros pares de 0 ate N em ordem crescente.*/ 

int imprimirPar1(int n){
    if(n<0)return 0;
    imprimirPar1(n-1);
    if(n%2 ==0 ) {
        printf("%d ", n);
    }
}

/*ou*/

void imprimirPar2(int n){
    if(n==0){
        printf("%d ", n);
        return;
    } else {
        imprimirPar2(n-1);
        if(n%2==0 ) {
            printf("%d ", n);
        }
    }
    
}

/*variacao*/

void imprimirParDec(int n){
    if(n==0){
        printf("%d ", n);
        return;
    } else {
        if(n%2==0 ) {
            printf("%d ", n);
        }
        imprimirParDec(n-1);
    }
}

/*variacao*/

int imprimirPar3(int n){
    if(n>0) {
        imprimirPar3(n-1);
        if(n%2 ==0 ) {
            printf("%d ", n);
        }
    } else {
        printf("%d ", n);
        return 0;
    }
}

/*variacao*/

void imprimirNegParDec(int n){
    if(n<0){
        if(n%2==0 ) {
            printf("%d ", n);
        }
        imprimirNegParDec(n+1);
    } else {
        printf("%d ", n);
        return;
    }
    
}

int main(){
    int n = 5, n2=-5;
    imprimirPar1(n);
    printf("\n");
    imprimirPar2(n);
    printf("\n");
    imprimirPar3(n);
    printf("\n");
    imprimirParDec(n);
    printf("\n");
    imprimirNegParDec(n2);
    return 0;
}

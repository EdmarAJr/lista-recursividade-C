#include <stdio.h>
#include <stdlib.h>

/* 39) Escreva uma funcao recursiva que calcule a multiplicacao de dois numeros 
naturais, atraves de incrementos sucessivos */

int multipRec(int n1, int n2){
    if(n1==0 || n2==0) return 0;
    return n1+multipRec(n1, n2-1);
}

int main(){
    int n1=5, n2=3;//15
    printf("%d * %d eh %d", n1, n2, multipRec(n1, n2));
    return 0;
}

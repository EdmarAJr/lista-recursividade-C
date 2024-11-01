#include <stdio.h>
#include <stdlib.h>

/* 38) Escreva uma funcao recursiva que calcule a soma de dois numeros naturais, 
atraves de incrementos sucessivos (Ex.: 3 + 2 = ++(++3)).*/

int somaRec(int n1, int n2){
    if(n1==0) return n2;
    if(n2==0) return n1;
    return somaRec(n1+1, n2-1);
}

int main(){
    int n1=3, n2=5;//8
    
    printf("A soma de %d, %d eh: %d", n1, n2, somaRec(n1, n2));
}

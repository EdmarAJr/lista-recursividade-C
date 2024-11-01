#include <stdio.h>
#include <stdlib.h>

/* 40) Escreva uma funcao recursiva que calcule a sequencia dada por:
F(1) = 1
F(2) = 2
F(n) = 2 * F(n-1) + 3 * F(n-2). */

int seq(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return 2*seq(n-1)+3*seq(n-2);
}

int main(){
    int n=3;//7
    printf("Valor da sequencia: %d", seq(n));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*30) A funcao de Acherman eh definida recursivamente nos numeros nao negativos como segue:
A(m, n)= n+1[se m=0], A(m-1,1)[se m>0 e n=0], A(m-1, A(m,n-1))[se m>0 e n>0]
Faca uma funcao recursiva em C para computar a funcao de Ackerman.*/

int ackermann(int m, int n){
    if(m < 0 || n < 0) return -1;
    if(m==0) return n+1;
    if(m>0 && n==0) return ackermann(m-1, 1);
    return ackermann(m-1, ackermann(m, n-1));
}

int main(){
    int m=2, n=3;
    
    printf("Resultado da funcao Ackermann: %d", ackermann(m,n));
    return 0;
}

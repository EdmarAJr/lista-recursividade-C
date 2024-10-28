#include <stdio.h>
#include <stdlib.h>


/*21) Os numeros tribonacci sao definidos pela seguinte recursao fn = 0,[se n=0] 0[se n=1], 1[se n=2], f(n-1)+f(n-2)+f(n-3)[se n>2]. Faca uma funcao recursiva que receba um numero N e retorne o N-esimo termo da sequencia de tribonacci.*/

int tribonacci(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}

int main(){
    int x =5;
    printf("O %dº elemento da sequencia tribonacci eh: %d", x, tribonacci(x));
    return 0;
}

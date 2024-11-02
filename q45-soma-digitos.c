#include <stdio.h>
#include <stdlib.h>

/* 45) Escreva uma funcao recursiva que calcule a soma dos digitos de um numero inteiro. Por exemplo, se a entrada
for 123, a saída devera ser 1+2+3 = 6. */

int somarDig(int n){
    if(n==0) return 0;
    return n%10+somarDig(n/10);
}

int main(){
    int n=765;//18
    printf("Resultado: %d", somarDig(n));
    return 0;
}

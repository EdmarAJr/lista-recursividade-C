#include <stdio.h>
#include <stdlib.h>

/*24)Os numeros de Pell sao definidos pela seguinte recursao p(n) = 0[se n=0], 1[se n=1], 2p*n-1+p(n-2)[se n>2]. Alguns numeros desta sequencia sao: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985... Faca uma funcao recursiva que receba um numero N e retorne o N-esimo numero de Pell.*/

int pell(int n){
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    
    return 2*pell(n-1)+pell(n-2);
}

int main(){
    int x =4;
    printf("O %dº elemento da sequencia Pell eh: %d", x, pell(x));
    return 0;
}

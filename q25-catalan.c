#include <stdio.h>
#include <stdlib.h>


/*25) Os numeros de Catalan sao definidos pela seguinte recursao. Alguns numeros desta sequencia sao: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786... Faca uma funcao recursiva que receba um numero N e retorne o N-esimo numero de Catalan.*/

int catalan(int n){
    if(n > 0 && n < 3) return 1;
    return 2*(2*n-1)*catalan(n-1)/(n+1);
}

int main(){
    int x = 3;
    printf("O %dº elemento da sequencia Catalan eh: %d", x, catalan(x));
    return 0;
}

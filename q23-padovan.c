#include <stdio.h>
#include <stdlib.h>


/*23)A sequencia de Padovan eh uma sequencia de naturais P(n) definida pelos valores iniciais P(0) = P(1) = P(2) = 1 e a seguinte relacao recursiva P(n) = P(n - 2) + P(n - 3) se n > 2. Alguns valores da sequencia sao: 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28... Faca uma funcao recursiva que receba um numero N e retorne o N-esimo termo da sequencia de Padovan.*/ 

int padovan(int n){
    if(n > 0 && n<4) return 1;
    return padovan(n-2)+padovan(n-3);
}

int main(){
    int x =6;
    printf("O %dº elemento da sequencia Padovan eh: %d", x, padovan(x));
    return 0;
}

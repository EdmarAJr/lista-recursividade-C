#include <stdio.h>
#include <stdlib.h>


/*22)Os numeros tetranacci iniciam com quatro termos pre-determinados e a partir dai todos os demais numeros sao obtidos pela soma dos quatro numeros anteriores. Os primeiros numeros tetranacci sao: 0, 0, 0, 1, 1, 2, 4, 8, 15, 29, 56, 108, 208... Faca uma funcao recursiva que receba um numero N e retorne o N-esimo termo da sequencia de tetranacci.*/ 

int tetranacci(int n){
    if(n > 0 && n<4) return 0;
    if(n==4 || n==5) return 1;
    return tetranacci(n-1)+tetranacci(n-2)+tetranacci(n-3)+tetranacci(n-4);
}

int main(){
    int x =7;
    printf("O %dº elemento da sequencia tetranacci eh: %d", x, tetranacci(x));
    return 0;
}

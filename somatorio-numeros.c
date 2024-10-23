#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*5) Crie uma funcao recursiva que receba um numero inteiro positivo N e calcule o somatorio dos numeros de 1 a N.*/  

int somarNum (int n){
     if (n < 0) return -1;
     if (n == 0) return 0;

    // Soma o ultimo elemento do vetor com a soma dos anteriores
    return n + somarNum(n-1);
}

int main(){
    int num = 5;//15
    printf("Somatorio de 0 ateh %d eh: %d", num, somarNum(num));
    return 0;
}

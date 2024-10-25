#include <stdio.h>
#include <stdlib.h>

/*6) Crie um programa em C, que contenha uma funcao recursiva que receba dois inteiros positivos k e n e calcule k^n. Utilize apenas multiplicacoes. O programa principal deve solicitar ao usuario os valores de k e n e imprimir o resultado da chamada da funcao.*/  

int potencia (int k, int n){
    //casos de parada
    if(n<0) return -1;
    if(n==0) return 1;
    if(k==0) return 0;
    if(n==1) return k;
    //diminuir o problema
    
    return k*potencia(k, n-1);    
}


int  main (){
    int base = -2, pot = 3;
    
    printf("A potencia de base %d elevado a %d eh: %d",base, pot, potencia(base, pot));
    return 0;
}
    

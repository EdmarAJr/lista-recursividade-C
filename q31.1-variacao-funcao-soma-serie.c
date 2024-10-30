#include <stdio.h>
#include <stdlib.h>

/*31.1) Escreva, usando a linguagem C, uma funcao recursiva, SomaSerie(i,j,k: inteiro): inteiro, que devolva a soma de i+j k vezes.*/

/*soma i + j em k vezes */
int somaSerie(int i, int j, int k){
    if(k==0) return 0;
    
    return i+somaSerie(i+j, j, k-1);
    
}

int main(){
    int i=3, j=5, k=3;//24
    printf("Soma serie: %d", somaSerie(i, j, k));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>


/*11) A multiplicacao de dois numeros inteiros pode ser feita atraves de somas sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicacao de dois inteiros.*/ 

int multipRec(int n1, int n2){
    if(n1 ==0 || n2==0) return 0;
    
    return n1+multipRec(n1, n2-1);
}

int main(){
  int n1=-4, n2=8;//-32
  
  printf("A multiplicacao de %d por %d eh: %d", n1, n2, multipRec(n1,n2));  
  return 0;
}

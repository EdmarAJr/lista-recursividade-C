#include <stdio.h>
#include <stdlib.h>


/*b) Multiplicacao de dois numeros naturais atraves de somas consecutivas.*/

int multipRec(int n1, int n2){
    if(n1==0 || n2==0) return 0;

    if(n1<0 && n2<0) return abs(n1) + multipRec(abs(n1), abs(n2)-1);
    if(n1<0) return n1 + multipRec(n1, n2-1);
    if(n2<0) return n2 + multipRec(n1-1, n2);

    return n1 + multipRec(n1, n2 - 1);
}

int main(){
    int n1 = -2, n2 = -4;

    printf("A multiplicacao de %d por %d eh: %d\n", n1, n2, multipRec(n1, n2));
    return 0;
}

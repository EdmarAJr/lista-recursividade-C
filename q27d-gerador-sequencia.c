#include <stdio.h>
#include <stdlib.h>

/* d) Gerador da sequencia:
    (a)F(1)=1 
    (b)F(2)=2 
    (c)F(n)= 2*F(n-1)+3*F(n-2)<=formula Geral
    Usando a formula podemos identificar que 
    F(3)=2*F(2)+3*F(1) 
    F(3)=4+3=7 */
    
    int gerador(int n){
        if(n==1)return 1;
        if(n==2)return 2;
        return 2*gerador(n-1) + 3*gerador(n-2);
    }
    
    int main(){
        int n =5;
        printf("Sequencia: %d", gerador(n));
        return 0;
    }

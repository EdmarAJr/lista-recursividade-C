#include <stdio.h>
#include <stdlib.h>

/*8) O maximo divisor comum dos inteiros x e y eh o maior inteiro que eh divisivel por x e y. Escreva uma funcao recursiva mdc em C, que retorna o maximo divisor comum de x e y. O mdc de x e y e definido como segue: se y eh igual a 0, entao mdc(x,y) eh x; caso contrario, mdc(x,y) eh mdc (y, x%y), onde % eh o operador resto*/ 

int mdc(int x, int y){
    if(x==0) return y;
    if(y==0) return x;
    
    return mdc(x%y, y%x);
}

int main(){
    int x=10, y=12;
    
    printf("O mdc de %d e %d eh: %d", x, y, mdc(x, y));
    return 0;
}

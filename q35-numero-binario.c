#include <stdio.h>
#include <stdlib.h>

/*35) Dado um numero n na base decimal, escreva uma funcao recursiva em C que 
converte este numero para binario. */

/*funcao com retorno converte o numero*/
int binario(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num % 2 + 10 * binario(num / 2);
    }
}

/*ou*/

/*funcao sem retorno nao converte, so imprime*/
void binario2 (int num){
    if(num==0) return;
    printf("%d", num%2);
    binario2(num/2);
}

int main() {
    int n = 9;
    printf("%d", binario(n));
    printf("\n");
    binario2(n);
    
    return 0;
}



// int main(){
//     int n=15;
//     binario(n);
//     return 0;
// }

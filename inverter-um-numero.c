#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*3) Faca uma funcao recursiva que permita inverter um numero inteiro N. Ex: 123 - 321
int inverter (int n) {
    static int invertido =0; //Ao declarar invertido como static, a variavel mantehm seu valor entre as chamadas recursivas, pois ela eh inicializada apenas uma vez e seu valor eh preservado entre as chamadas da funcao.*/  

int inverter(int n){
    static int invertido=0;
    if (n > 0) {
        invertido = invertido * 10 + (n % 10);  
        inverter(n / 10);
    }
    return invertido;
}

int main () {
    int n = 2417;//7142
    printf("O numero invertido eh: %d\n", inverter(n));
    return 0;
}

/*ou*/

// int inverterNumero(int n, int inverso) {
//     if (n == 0)
//         return inverso;
//     inverso = inverso * 10 + (n % 10);
    
//     return inverterNumero(n / 10, inverso);
// }

// int main() {
//     int n = 123;
//     printf("O numero invertido eh: %d\n", inverterNumero(n, 0));
//     return 0;
// }

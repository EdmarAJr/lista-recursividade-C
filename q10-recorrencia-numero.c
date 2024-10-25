#include <stdio.h>
#include <stdlib.h>


/*10) Escreva uma funcao recursiva que determine quantas vezes um digito K ocorre em um numero natural N. Por exemplo, o digito 2 ocorre 3 vezes em 762021192.*/ 

int contar(int dig, int num) {
    if (num == 0) return 0;  // Caso base: quando o numero se torna 0, a contagem para

    // Soma 1 se o digito atual for igual ao digito procurado
    return (dig == num % 10) + contar(dig, num / 10);
}

int main() {
    int num = 762021192, dig = 2;

    printf("%d\n", contar(dig, num));
    return 0;
}

/*ou*/

int contar(int dig, int num, int cont){
    
    if(num == 0)return cont;

    if (dig==num%10) cont++;
    return contar(dig, num/10, cont);
}

int main(){
    int num = 762021192, dig = 2;
    
    printf("o digito %d aparace %dx no numero %d", dig, contar(dig, num, 0), num);
    return 0;
}

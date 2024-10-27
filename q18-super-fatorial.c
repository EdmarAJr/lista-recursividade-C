#include <stdio.h>
#include <stdlib.h>


/*18) O superfatorial de um numero N eh definido pelo produto dos N primeiros fatoriais de N. Assim, o superfatorial de 4 eh sf(4) = 1! * 2! * 3! * 4! = 288. Faca uma funcao recursiva que receba um numero inteiro positivo N e retorne o superfatorial desse numero.*/ 

int superFat(int n) {
	if(n == 0 || n == 1) {
		return 1;
	}
	int fat(int n) {
		if(n == 0 || n == 1) {
			return 1;
		}
		return n * fat(n - 1);
	}
	return fat(n) * superFat(n - 1);

}

/*ou*/

int superFat2(int n) {
	if(n<=1) 	return 1;
	int fat(int n) {
		if(n<=1) 	return 1;
		return n * fat(n-1);
	}
	return n*superFat2(n-1) * fat(n-1);
}

int main(){
    int x = 4;
    
    printf("O super fatorial de %d eh: %d\n", x, superFat(x));
    printf("O super fatorial de %d eh: %d\n", x, superFat2(x));
    return 0;
}

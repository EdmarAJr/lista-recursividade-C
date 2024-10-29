#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 1000 // tamanho maximo para a string resultante

/*26) Uma palavra de Fibonacci eh definida por f(n)=b[se n=0], a[se n=1], f(n-1)+f(n-2)[se n>1] Aqui + denota a concatenacao de duas strings. Esta sequencia inicia com as seguintes palavras: b, a, ab, aba, abaab, abaababa, abaababaabaab... Faca uma funcao recursiva que receba um numero N e retorne a N-esima palavra de Fibonacci.*/

char * palavraFibonacci(int n) {
	char * interna(int n, char * menos1, char * menos2) {
		if(n == 0) 	return menos2;
		if(n == 1) return menos1;
	
		int tamMenos1 = strlen(menos1);
		int tamMenos2 = strlen(menos2);
		char aux[tamMenos1];
		strcpy(aux,menos1);
		char auxMenos1[tamMenos1 + tamMenos2 + 1];
		strcpy(auxMenos1,menos1);
		strcat(auxMenos1,menos2);
		return interna(n - 1, auxMenos1, aux);
	}
	char * a = "a";
	char * b = "b";
	return interna(n, a, b);
}
/*ou*/

void pf(int n, char *str) {
    char *A= "a";
    char *B= "b";
    //char temp[MAX_LEN];

    void pvr(int n, char *p) {
        if (n == 0) {
            strcpy(p, B);
            return;
        }
        if (n == 1) {
            strcpy(p, A);
            return;
        }

        char parte1[MAX_LEN], parte2[MAX_LEN];
        pvr(n - 1, parte1);
        pvr(n - 2, parte2);

        strcpy(p, parte1);
        strcat(p, parte2);
    }

    pvr(n, str);
}

int main(){
    int x = 4;
    char result[MAX_LEN] = "";
    printf("O %dº elemento da palavra Fibonacci eh: %s\n", x, palavraFibonacci(x));
    pf(x, result);
    printf("A palavra Fibonacci na posição %d é: %s\n", x, result);

    return 0;
}



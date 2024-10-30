#include <stdio.h>
#include <stdlib.h>

/* 28) A multiplicacao a Russa consiste em:
a) - Escrever os numeros A e B, que se deseja multiplicar na parte superior das colunas.
b) - Dividir A por 2, sucessivamente, ignorando o resto ate chegar a unidade, escrever os resultados da coluna A.
c) - Multiplicar B por 2 tantas vezes quantas se haja dividido A por 2, escrever os resultados sucessivos na coluna B.
d) - Somar todos os numeros da coluna B que estejam ao lado de um numero impar da coluna A.
Exemplo: 27 × 82

		 A    B   Parcelas
		27   82    82
		13   164   164
		6    328   -
		3    656   656
		1    1312  1312
		---------------
		Soma:     2214

Programar em C um algoritmo recursivo que permita fazer a multiplicacao a russa de 2 entradas;*/

int multRus(int a, int b) {
	int interna(int a, int b, int soma) {
		if(a == 0) return soma;
		if(a % 2 != 0) soma += b;
		b = b * 2;
		return interna(a / 2, b, soma);
	}
	int soma = 0;
	interna(a, b, soma);
}

int main() {
    int n1=27, n2=82;
    printf("multiplicacao Russa: %d\n", multRus(n1, n2));
    return 0;
}

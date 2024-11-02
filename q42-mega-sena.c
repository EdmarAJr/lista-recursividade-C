#include <stdio.h>
#include <stdlib.h>


/* 42) Escreva uma funcao recursiva que gere todas as possíveis combinacoes para um jogo da MegaSena com 6 dezenas */
/* Combinacao simples de n elementos tomadaos de p a p     C(n,p)
	C(60,6) = 60! / 6!(60 - 6)!  */

void imprimirCombinacoes(int n, int r) {
    int data[r];
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    gerarCombinacoes(arr, n, r, 0, data, 0);
}

void gerarCombinacoes(int arr[], int n, int r, int index, int data[], int i) {
    if (index == r) {
        for (int j = 0; j < r; j++) {
            printf("%d ", data[j]);
        }
        printf("\n");
        return;
    }

    if (i >= n) {
        return;
    }

    data[index] = arr[i];
    gerarCombinacoes(arr, n, r, index + 1, data, i + 1);
    gerarCombinacoes(arr, n, r, index, data, i + 1);
}

int main() {
    int dezenas = 60, dig = 6;
    imprimirCombinacoes(dezenas, dig);
    return 0;
}

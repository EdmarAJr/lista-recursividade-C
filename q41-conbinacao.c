#include <stdio.h>
#include <stdlib.h>

/* 41) Escreva uma funcao recursiva que dado um numero n, gere todas as possiveis combinacoes com as n primeiras letras
do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA
A(n,r) = n! / (n - r)!
ALFABETO MAIUSCULO [0x41; 0x5A]*/

//Funcao para trocar dois caracteres
void troca(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Funcao recursiva para gerar permutacoes
void permutar(char *str, int esquerda, int direita) {
    if (esquerda == direita) {
        printf("%s\n", str);
    } else {
        for (int i = esquerda; i <= direita; i++) {
            troca((str + esquerda), (str + i));
            permutar(str, esquerda + 1, direita);
            troca((str + esquerda), (str + i)); // backtrack
        }
    }
}

// // Funcao para gerar a string com as primeiras n letras do alfabeto
void gerarString(char *str, int n) {
    for (int i = 0; i < n; i++) {
        str[i] = 'A' + i;
    }
    str[n] = '\0';
}

int main() {
    int n = 5; // Numero de letras
    char str[n + 1]; // String para armazenar as primeiras n letras do alfabeto
    
    gerarString(str, n);
    permutar(str, 0, n - 1);
    
    return 0;
}

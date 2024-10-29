#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*f) Busca sequencial em um vetor desordenado que retorna a posicao da primeira ocorrencia de um elemento procurado usando uma estrategia similar a da busca binaria.
Dica: Se nao eh o elemento do meio, procure dos dois lados e retorne o menor dos 
indices encontrados. Se for o elemento do meio, continue a busca apenas do lado 
esquerdo, retornando a posicao de la se encontrar e o meio senao encontrar*/

// Funcao auxiliar para buscar o menor indice
int buscaSeq(int v[], int busca, int inicio, int fim) {
    if (inicio > fim) return -1; // Se os indices se cruzarem, o elemento nao esta presente
    
    int meio = (inicio + fim) / 2;

    // Se encontrar o valor no meio, continua a busca na metade esquerda
    if (v[meio] == busca) {
        int esquerda = buscaSeq(v, busca, inicio, meio - 1);
        return (esquerda != -1) ? esquerda : meio;
    } else {
        // Busca nas duas metades
        int esquerda = buscaSeq(v, busca, inicio, meio - 1);
        int direita = buscaSeq(v, busca, meio + 1, fim);
        if (esquerda == -1 && direita == -1) return -1;
        if (esquerda == -1) return direita;
        if (direita == -1) return esquerda;
        return (esquerda < direita) ? esquerda : direita;
    }
}

int main() {
    int vet[] = {7, 1, 6, 4, 9, 5, 8, 0, 5};
    int tamanho = sizeof(vet) / sizeof(vet[0]);
    int busca = 5;
    int resultado = buscaSeq(vet, busca, 0, tamanho - 1);
    if (resultado != -1)
        printf("Busca: %d encontrado na posição: %d\n", busca, resultado);
    else
        printf("Elemento %d não encontrado no vetor.\n", busca);
    return 0;
}

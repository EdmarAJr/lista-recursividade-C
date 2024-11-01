#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*37) Uma matriz maze de 0s e 1s, de 10X10, representa um labirinto no qual um 
viajante 
precisa encontrar um caminho de maze[0][0] a maze[9][9]. O viajante pode passar de 
um quadrado para qualquer outro adjacente na mesma fileira ou coluna, mas nao pode 
saltar quadrados nem se movimentar na diagonal. Alehm disso, o viajante nao pode 
entrar num quadrado contendo um 1. maze[0][0] e maze[9][9] contêm 0s. Escreva uma 
rotina recursiva que aceite este labirinto maze e imprima uma mensagem informando a 
inexistência de um caminho atravehs do labirinto, ou que imprima uma lista de posicoes 
representando um caminho de [0][0] a [9][9]. */


#define t 10

int matrizMaze(int maze[t][t], int x, int y, int visitado[t][t]) {
    // Verifica se alcançamos a célula inferior direita
    if (x == t - 1 && y == t - 1 && maze[x][y] == 0) {
        return 1;
    }

    // Verifica se a celula atual eh valida
    if (x >= 0 && x < t && y >= 0 && y < t && maze[x][y] == 0 && !visitado[x][y]) {
        // Marca a célula atual como visitada
        visitado[x][y] = 1;

        // Move-se para a celula direita
        if (matrizMaze(maze, x + 1, y, visitado)) return 1;

        // Move-se para a celula abaixo
        if (matrizMaze(maze, x, y + 1, visitado)) return 1;

        // Move-se para a celula esquerda
        if (matrizMaze(maze, x - 1, y, visitado)) return 1;

        // Move-se para a celula acima
        if (matrizMaze(maze, x, y - 1, visitado)) return 1;

        // Desmarca a celula atual (backtracking)
        visitado[x][y] = 0;
    }

    return 0;
}

int main() {
    int maze[t][t] = {
        {0,0,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,1,1,1,1,1},
        {1,1,1,1,0,1,1,1,1,1},
        {1,1,1,1,0,1,1,1,1,1},
        {1,1,1,0,0,1,1,1,1,1},
        {1,1,1,0,0,0,0,0,1,1},
        {1,1,1,1,1,1,1,0,1,1},
        {1,1,1,1,1,1,1,0,0,0},
        {1,1,1,1,1,1,1,1,1,0},
        {1,1,1,1,1,1,1,1,1,0}
    };
    
    int visitado[t][t] = {0}; // Inicializa a matriz de celulas visitadas

    if (matrizMaze(maze, 0, 0, visitado)) {
        printf("Existe caminho\n");
    } else {
        printf("Não existe caminho\n");
    }

    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define VERTICES 4

void printAdjacencyMatrix(int matrix[][VERTICES]) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < VERTICES; i++) {
        for (int j = 0; j < VERTICES; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void convertToAdjacencyList(int matrix[][VERTICES]) {
    printf("\nAdjacency List:\n");
    for (int i = 0; i < VERTICES; i++) {
        printf("%d: ", i);
        int hasNeighbor = 0;
        for (int j = 0; j < VERTICES; j++) {
            if (matrix[i][j] == 1) {
                if (hasNeighbor) {
                    printf("->");
                }
                printf("%d", j);
                hasNeighbor = 1;
            }
        }
        printf("->NULL\n");
    }
}

int main() {
    int adjacencyMatrix[VERTICES][VERTICES] = {
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 0}
    };

    printAdjacencyMatrix(adjacencyMatrix);
    convertToAdjacencyList(adjacencyMatrix);

    return 0;
}



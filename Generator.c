#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Function.h"
#include "Generator.h"

int **GenerateMatrix( int **adjacency_matrix, int *no_nodes){

    srand(time(0));

	int iterator_1, iterator_2;

    //Redimension matrix with 0
    adjacency_matrix =  (int**)calloc (no_nodes + 1, sizeof(int));
    for (iterator_1 = 1; iterator_1 <= no_nodes; iterator_1++){
         adjacency_matrix[iterator_1] = (int *)calloc(no_nodes + 1, sizeof(int));
    }

    //Generate matrix
	for(iterator_1 = 1; iterator_1 <= no_nodes; iterator_1++ ){
	     for(iterator_2 = 1 ; iterator_2 <= no_nodes ; iterator_2++){
            int val = rand() % 2;
            if(!adjacency_matrix[iterator_1][iterator_2]){
            adjacency_matrix[iterator_1][iterator_2] = val;
            adjacency_matrix[iterator_2][iterator_1] = val;// there is no edge between the nodes
            }
	     }
	}
     //The Main Diagonal = 0
	for(iterator_1 = 1; iterator_1 <= no_nodes; iterator_1++)
        adjacency_matrix[iterator_1][iterator_1] = 0;

    return adjacency_matrix;
}


#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
#include "Generator.h"

int chromatic_no;
int  no_nodes;
int counter_for_solution;
int **adjacency_matrix;
int color[100]; //memoreaza culoarea nodului respectiv

int main()
{
    int iterator_1, iterator_2;

    printf("Enter the number of nodes : ");
    scanf("%d", &no_nodes);

    //allocating space in the memory for the adjacency matrix of the graph
    adjacency_matrix = malloc(no_nodes * sizeof(int*));
    for (iterator_1 = 0; iterator_1 < no_nodes; iterator_1++)
    {
        adjacency_matrix[iterator_1] = malloc(no_nodes * sizeof(int));
    }
    //assigning the adjacency matrix the random generated matrix
    adjacency_matrix = GenerateMatrix(&adjacency_matrix, no_nodes);

    //printing the adjacency matrix
    for (iterator_1 = 0; iterator_1 < no_nodes; iterator_1++)
    {
        printf("\n");

        for (iterator_2 = 0; iterator_2 < no_nodes; iterator_2++)
        {
            printf("%d ", adjacency_matrix[iterator_1][iterator_2]);
        }
    }

    printf("\n");

    printf("\nPossible Solutions are\n");

    for(chromatic_no=1; chromatic_no<=no_nodes; chromatic_no++)
    {

        if(counter_for_solution==1)
        {

            break;
        }

        GraphColoring(1);

    }


    printf("\nThe chromatic number is %d", chromatic_no-1);

    for (iterator_1 = 0; iterator_1 < no_nodes; iterator_1++)
    {
        free(adjacency_matrix[iterator_1]);
    }
    free(adjacency_matrix);

    return 0;

}

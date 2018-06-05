#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

int chromatic_no;
int  no_nodes;
int counter_for_solution;
int adjacency_matrix[100][100];
int color[100]; //memoreaza culoarea nodului respectiv

void  main(){
  int iterator_1, iterator_2;

  int existence_of_edge;

  printf("\nEnter the number of nodes: ");

  scanf("%d", &no_nodes);


  printf("\n===Enter 1 if the nodes are adjacent, otherwise enter 0===\n");

  for(iterator_1=1; iterator_1<=no_nodes; iterator_1++){

        color[iterator_1]=0; //we've not colored it yet

        for(iterator_2=1; iterator_2<=no_nodes; iterator_2++){

                    if(iterator_1==iterator_2)

                                adjacency_matrix[iterator_1][iterator_2]=0;

                    else{

                                printf("%d -> %d: " , iterator_1, iterator_2);
                                scanf("%d", &existence_of_edge);

                                adjacency_matrix[iterator_1][iterator_2]=adjacency_matrix[iterator_2][iterator_1]=existence_of_edge;

                    }

            }

    }


    printf("\nEnter Adjacency Matrix:\n");

    for(iterator_1=1;iterator_1<=no_nodes;iterator_1++){

                for(iterator_2=1;iterator_2<=no_nodes;iterator_2++){

                          printf("a[%d][%d]= ", iterator_1,iterator_2);
                          scanf("%d", &adjacency_matrix[iterator_1][iterator_2]);
                }
    }


    printf("\nPossible Solutions are\n");

    for(chromatic_no=1;chromatic_no<=no_nodes;chromatic_no++){

            if(counter_for_solution==1){

                     break;
            }

            GraphColoring(1);

     }


    printf("\nThe chromatic number is %d", chromatic_no);

}

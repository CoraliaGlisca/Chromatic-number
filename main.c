#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

int chromatic_no;
int  no_nodes;
int counter_for_solution=0;
int adjacency_matrix[100][100];
int color[100]; //memoreaza culoarea nodului respectiv

void  main(){
        int i, j;

        int existence_of_edge;

       printf("\nEnter the number of nodes: ");

       scanf("%d", &no_nodes);


      printf("\n===Enter 1 if the nodes are adjacent, otherwise enter 0===\n");

      for(i=1; i<=no_nodes; i++){

                color[i]=0; //we've not colored it yet

                 for(j=1; j<=no_nodes; j++) {

                            if(i==j)

                                    adjacency_matrix[i][j]=0;

                             else{

                                    printf("%d -> %d: " , i, j);
                                    scanf("%d", &existence_of_edge);

                                   adjacency_matrix[i][j]=adjacency_matrix[j][i]=existence_of_edge;

                            }

                     }

           }


       printf("\nEnter Adjacency Matrix:\n");

       for(i=1;i<=no_nodes;i++){

                for(j=1;j<=no_nodes;j++){

                          printf("a[%d][%d]= ", i,j);
                          scanf("%d", &adjacency_matrix[i][j]);
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

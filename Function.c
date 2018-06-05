#include<stdio.h>
#include<conio.h>
#include"Function.h"
#include"Generator.h"

extern int chromatic_no;
extern int no_nodes;
extern int counter_for_solution;
extern int **adjacency_matrix;
extern int color[100];

void NextValue(int k_node){

  int iterator_2;

  while(1){

        color[k_node]=(color[k_node]+1)%(chromatic_no+1);

        if(color[k_node]==0){

                return;
        }

        for(iterator_2=1; iterator_2<=no_nodes; iterator_2++){

                  if(adjacency_matrix[k_node][iterator_2]==1&&color[k_node]==color[iterator_2])

                              break;
        }

        if(iterator_2==(no_nodes+1)) {

                 return;
        }

    }

}

void GraphColoring(int k_node){  //generates a combination of colors and prints it

  int iterator_1;

  while(1){

        NextValue(k_node);

        if(color[k_node]==0){

                return;
        }

        if(k_node==no_nodes){

             counter_for_solution=1;

             for(iterator_1=1; iterator_1<=no_nodes; iterator_1++){

                             printf("%d ", color[iterator_1]);
             }


             printf("\n");

        }else{

              GraphColoring(k_node+1);

        }
	}
}

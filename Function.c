#include<stdio.h>
#include<conio.h>
#include"function.h"

extern int chromatic_no;
extern int no_nodes;
extern int counter_for_solution;
extern int adjacency_matrix[100][100];
extern int color[100];

void NextValue( int k_node){
	  int iterative_2;

    while(1){

        color[k_node]=(color[k_node]+1)%(chromatic_no+1);
		
		   if(color[k_node]==0) {

            return;
           }

        for(iterative_2=1; iterative_2<=no_nodes; iterative_2++){
		
                  if(adjacency_matrix[k_node][iterative_2]==1&&color[k_node]==color[iterative_2])
                           break;
        }

    }

}

void GraphColoring(int k_node){  //generates a combination of colors and prints it

    int iterative_1;

    while(1){

           nextValue(k_node);
		
		   if(color[k_node]==0){}

                return;
           }

          if(k_node==no_nodes) {

                  counter_for_solution=1;

                 for(iterative_1=1; iterative_1<=no_nodes; iterative_1++) {

                             printf("%d ", color[iterative_1]);
                 }


                  printf("\n");

        } else{

              GraphColoring(k_node+1);


    }

}

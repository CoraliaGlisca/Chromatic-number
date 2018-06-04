#include<stdio.h>
#include<conio.h>
#include"function.h"

extern int chromatic_no;
extern int no_nodes;
extern int counter_for_solution;
extern int adjacency_matrix[100][100];
extern int color[100];

void NextValue( int k_node){
	  int j;

    while(1)
    {

        color[k_node]=(color[k_node]+1)%(chromatic_no+1);

        for(j=1; j<=no_nodes; j++)
        {
                  if(adjacency_matrix[k_node][j]==1&&color[k_node]==color[j])
                           break;
        }

    }

}

void GraphColoring(int k_node)  //generates a combination of colors and prints it
{

    int i;

    while(1)
    {

        nextValue(k_node);

        if(k_node==no_nodes)
        {

            counter_for_solution=1;

            for(i=1; i<=no_nodes; i++)
            {

                printf("%d ", color[i]);
            }


            printf("\n");

        }
        else

            GraphColoring(k_node+1);


    }

}

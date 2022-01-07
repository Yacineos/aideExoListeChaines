#include "bessaa.h"
#include <stdio.h>
#include <stdlib.h>
#include "bessaa.c"
int main()
{
    Pliste T ;
    int **M=(int **)malloc(sizeof(int *));
    for(int i=0;i<2;i++)
    {
        M[i]=(int *)malloc(sizeof(int));
    }
    
    for(int i=0 ; i<2 ;i++ )
    {
        for (int j=0 ;j<2 ;j++ )
        {
            printf("Entrer la val du couple (%d,%d) \n",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }

    T = minLignes(M,2,2);
    affichLinkedList(T);
    return 0;
}

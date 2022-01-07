#include "bessaa.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Pliste T ;
    int M[2][2];
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

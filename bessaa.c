#include "bessaa.h"
#include <stdio.h>
#include <stdlib.h>

int minim(int** M , int i , int m )
{
    printf("maybe");
    int mini = M[i][0];
    printf("same");
        for (int j=0;j<m ;j++)
         {
             if(M[i][j]<mini)
              {
                mini = M[i][j];
              }
         }


    return mini ;
}

Pliste minLignes(int** M , int n , int m )
{
    Pliste T, Q , P ;

    T = NULL;
    T = (Pliste)malloc(sizeof(node));
    T -> val = minim(M,0,m);
    Q = T ;
    for (int i = 1 ; i < n ; i++)
    {
        P = (Pliste)malloc(sizeof(node));
        P -> val = minim(M,i,m);
        Q -> svt = P ;
        Q = P ;
    }
    Q -> svt = NULL ;

    return T;
}

void affichLinkedList(Pliste T ){
    Pliste P ;
    P = T ;
    while(P ->svt != NULL)
    {
        printf("|%d| -> \t",P ->val);
        P = P ->svt ;
    }

}









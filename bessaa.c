#include "bessaa.h"
#include <stdio.h>
#include <stdlib.h>

int minim(int** M , int i , int m )
{

    int mini = M[i][0];

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
    Pliste L, Q , P ;

    L = NULL;
    L = (Pliste)malloc(sizeof(node));
    if(!L) exit(-1);
    L -> val = minim(M,0,m);
    Q = L ;
    for (int i = 1 ; i < n ; i++)
    {
        P = (Pliste)malloc(sizeof(node));
        if(!P) exit(-1);
        P -> val = minim(M,i,m);
        printf("min=%d\n",P->val );
        Q -> svt = P ;
        Q = P ;
    }
    Q -> svt = NULL ;

    return L;
}

void affichLinkedList(Pliste T ){
    Pliste P ;
    P = T ;
    while(P!= NULL)
    {
        printf("|%d| -> \t",P ->val);
        P = P ->svt ;
    }

}









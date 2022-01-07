#ifndef BESSAA_H_INCLUDED
#define BESSAA_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

typedef struct node{

    int val ;
    struct node *svt ;

}node;
typedef struct node *Pliste ;

// fonction exercice 1
int minim(int**,int , int );
Pliste minLignes(int** , int , int );
void affichLinkedList(Pliste );

#endif // BESSAA_H_INCLUDED

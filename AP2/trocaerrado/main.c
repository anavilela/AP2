#include <stdio.h>
#include <stdlib.h>
 int *pr,*q;


void troca (int a, int b)
{   int temp = a;
     a=b;
     b=temp;
}
void main ( )
{   int n,k;
int qq=9;
     scanf("%d",&n);
     //scanf("%d",&k);
     q=&qq;
     pr=&n;
    // troca(n,k);
     printf("%d %d %d",q-pr, q, q+1);
}

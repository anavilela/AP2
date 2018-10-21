#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "troca.h"

int main()
{
    setlocale (LC_ALL, "");
    int a, b, c, aux;

    printf("Programa que faz a ordenação crescente de 3 valores\n");

    printf("Entre com os valores a, b, c:\n");
    scanf("%d %d %d",&a, &b, &c);

    if((a>b)||(a>c))
    {
        if(b<c)
        {
          troca(&a,&b);  //a<b
        }
        else
        {
            troca(&a,&c);//a<c
        }
    }

    if(b>c)
    {
        troca(&b,&c);
    }
    printf("%d, %d, %d",a,b,c);
}

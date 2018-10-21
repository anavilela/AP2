#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "calculadora.h"

int main()
{
//    setlocale(LC_All,"");
    int i, j, flag=1;
    char op;



    do{
    printf("Digite dois valores e a operação desejada:\n");
    scanf("%d %d %c",&i,&j,&op);
    switch(op)
    {

    case 'a':
        printf("A soma entre %d e %d é: %d\n\n",i,j,soma(i,j));
        break;

    case 'b':
         printf("A subtração entre %d e %d é: %d\n\n",i,j,subt(i,j));
         break;

    case 'c':
         printf("A multiplição entre %d e %d é: %d\n\n",i,j,mult(i,j));
         break;

    case 'd':
         printf("A divisão entre %d e %d é: %f\n\n",i,j,divi(i,j));
         break;

    default:
        printf("\nOpção inválida!");
        flag=0;


    }
    }while(flag==1);


}

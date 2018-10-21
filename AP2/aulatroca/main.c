#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,*ptr;

    ptr=&a;

    printf("Digite o valor de a: \n");
    scanf("%d",&a);
    printf("A variável a=%d\nO endereço de a é: %x\n",a,&a);
   printf("O conteúdo que a variável ptr aponta é:%x %p",&ptr,ptr);
}

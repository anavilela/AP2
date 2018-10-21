#include <stdio.h>
#include <stdlib.h>

int fibrec(int n)
{

    if((n==1)||(n==2))
        return 1;
    else
        return fibrec(n-1)+fibrec(n-2);
}

int fib(int n)
{
    int fb,fib1=1,fib2=1;

    while(n>2)
    {
        fb=fib1+fib2;
        fib2=fib1;
        fib1=fb;
        n--;
    }
    return fb;
}

int main()
{
    int x;
    printf("%d e %d",fibrec(6),fib(7));
    //return 0;
}

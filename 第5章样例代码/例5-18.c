#include <stdio.h>
#include <string.h>
void main()
{
    int x,*q,**p;
    x=10;
    q=&x;
    p=&q;
    printf("%d\n",**p);
}

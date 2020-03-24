#include <stdio.h>
void main()
{
    int a,b,*c;
    a=100;
    c=&a;
    b=*c;
    printf("b=%d\n",b);
}

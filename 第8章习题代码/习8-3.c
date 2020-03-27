#include <stdio.h>
void main()
{
    union EXAMPLE
    {
        struct
        {
            int x,y;
        }in;
        int a,b;
    }e;
    e.a=1;
    e.b=2;
    e.in.x=e.a*e.b;
    e.in.y=e.a+e.b;
    printf("%d,%d\n",e.in.x,e.in.y);
    printf("%x,%x\n",&e.in.x,&e.in.y);
    printf("%d,%d\n",e.a,e.b);
    printf("%x,%x\n",&e.a,&e.b);
}

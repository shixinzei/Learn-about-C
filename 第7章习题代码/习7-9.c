#include <stdio.h>
int a;
static int b;
void main()
{
    static int c;
    register int d;
    int e;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    printf("e=%d\n",e);
}

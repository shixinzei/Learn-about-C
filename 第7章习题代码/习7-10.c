#include <stdio.h>
#define SQUARE1(x) x*x
#define SQUARE2(x) (x)*(x)
void main()
{
    int a,b;
    a=SQUARE1(5+1);
    b=SQUARE2(5+1);
    printf("a=%d,b=%d\n",a,b);
}

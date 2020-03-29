#include <stdio.h>
int a=10;
void main()
{
    extern b;
    printf("a=%d,b=%d\n",a,b);
    printf("a*b=%d\n",a*b);
}
int b=20;

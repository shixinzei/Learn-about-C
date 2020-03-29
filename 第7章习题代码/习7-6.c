#include <stdio.h>
int x=100;
int y=200;
void main()
{
    static int z=300;
    int x=155;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
}

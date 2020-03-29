#include <stdio.h>
#define MAX(a,b) (a>b)?a:b
void main()
{
    int x,y,z;
    printf("input 3 numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    x=MAX(x,y);
    x=MAX(x,z);
    printf("maxnum:%d\n",x);
}

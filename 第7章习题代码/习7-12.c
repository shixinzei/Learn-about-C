#include <stdio.h>
#define MIN(a,b) (a<b)?a:b
void main()
{
    int x,y,z;
    printf("input 3 numbers:\n");
    scanf("%d%d%d",&x,&y,&z);
    x=MIN(x,y);
    x=MIN(x,z);
    printf("minnum:%d\n",x);
}

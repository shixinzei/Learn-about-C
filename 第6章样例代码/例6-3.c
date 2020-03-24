#include <stdio.h>
int _min(int a,int b)
{
    if(a<b) return a;
    return b;
}
void main()
{
    int _min(int a,int b);
    int x,y,z;
    printf("input two numbers:\n");
    scanf("%d%d",&x,&y);
    z=_min(x,y);
    printf("minnum=%d\n",z);
}

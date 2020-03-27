#include <stdio.h>
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
int min(int a,int b)
{
    if(a>b) return b;
    return a;
}
void main()
{
    int max(int a,int b);
    int min(int a,int b);
    int (*pf)(int a,int b);
    int x,y,z;
    printf("input two numbers:\n");
    scanf("%d%d",&x,&y);
    pf=max;
    z=(*pf)(x,y);
    printf("maxnum=%d\n",z);
    pf=min;
    z=(*pf)(x,y);
    printf("minnum=%d\n",z);
}

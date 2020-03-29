#include <stdio.h>
void main()
{
    void fun(int a,int b);
    int i,j,k,l,x,y;
    i=2;j=3;k=4;l=5;x=6;y=7;
    fun(i,j);
    printf("i=%d,j=%d\n",i,j);
    printf("x=%d,y=%d\n",x,y);
    fun(k,l);
}
void fun(int i,int j)
{
    int x,y;
    x=8;y=9;
    i=i+1;
    j=j+1;
    printf("i=%d,j=%d\n",i,j);
    printf("x=%d,y=%d\n",x,y);
}

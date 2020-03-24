#include <stdio.h>
#include <string.h>
//定义一个带参函数
int _min(int a,int b)
{
    if(a>b) return a;
    return b;
}
void main()
{
    int x=3,y=2;
    printf("%d",_min(x,y));
}

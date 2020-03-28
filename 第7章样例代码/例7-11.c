#include <stdio.h>
#define MAX(a,b) (a>b)?a:b
//带参数的宏定义
void main()
{
    int x,y;
    x=10,y=20;
    printf("the maxnum is %d",MAX(x,y));
}

#include <stdio.h>
#include <string.h>
//����һ�����κ���
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

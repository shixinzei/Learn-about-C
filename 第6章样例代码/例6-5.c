#include <stdio.h>
void main()
{
    int sqr(int x);
    int t=10;
    printf("%d��%d��ƽ��",sqr(t),t);
}
int sqr(int x)
{
    x=x*x;
    return x;
}

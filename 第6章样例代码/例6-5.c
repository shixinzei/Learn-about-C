#include <stdio.h>
void main()
{
    int sqr(int x);
    int t=10;
    printf("%d是%d的平方",sqr(t),t);
}
int sqr(int x)
{
    x=x*x;
    return x;
}

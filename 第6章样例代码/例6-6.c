#include <stdio.h>
void swap(int *a,int *b);
void main()
{
    int m,n;
    printf("input two numbers:\n");
    scanf("%d%d",&m,&n);
    swap(&m,&n);
    printf("m=%d,n=%d\n",m,n);
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

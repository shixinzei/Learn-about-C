#include <stdio.h>
#define SWAP(m,n) t=n;n=m;m=t
void main()
{
    int a,b,c,t;
    printf("input two numbers:\n");
    scanf("%d%d",&a,&b);
    SWAP(a,b);
    printf("Exchange:a=%d,b=%d\n",a,b);
}

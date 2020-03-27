#include <stdio.h>
long ff(int n)
{
    long f;
    if(n<0) printf("error\n");
    else if(n==0||n==1) f=1;
    else f=ff(n-1)*n;
    return f;
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d!=%ld",n,ff(n));
}

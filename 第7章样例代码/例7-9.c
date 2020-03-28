#include <stdio.h>
long sum(int n)
{
    register long i,s=0;
    for(i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("sum=%ld\n",sum(n));
}

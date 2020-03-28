#include <stdio.h>
int gysh,gbsh;
void deal(int x,int y)
{
    int m,n,temp;
    if(x>y){
        m=x,n=y;
    }else{
        m=y,n=x;
    }
    while(n!=0){
        temp=m%n;
        m=n;
        n=temp;
    }
    gysh=m;
    gbsh=(x*y)/gysh;
}
void main()
{
    int a,b;
    printf("input two numbers:\n");
    scanf("%d%d",&a,&b);
    deal(a,b);
    printf("gysh:%d gbsh:%d\n",gysh,gbsh);
}

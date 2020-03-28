#include <stdio.h>
int find(int n)
{
    int a=n/100;
    int b=(n/10)%10;
    int c=n%10;
    if(n==a*a*a+b*b*b+c*c*c) return 1;
    return 0;
}
void main()
{
    int i;
    for(i=100;i<1000;i++){
        if(find(i)){
            printf("%d\t",i);
        }
    }
}

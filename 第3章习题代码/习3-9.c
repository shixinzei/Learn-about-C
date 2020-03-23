#include <stdio.h>
void main()
{
    int k=0,m,result=2;
    scanf("%d",&m);
    while(result<=m){
        result*=2;
        k++;
    }
    printf("%d\n",k);
}

//»¥ÂúÊı
#include <stdio.h>
int factor(int j)
{
    int sum=0,i;
    for(i=1;i<j;i++){
        if(j%i==0){
            sum+=i;
        }
    }
    return sum;
}
void main()
{
    int i,j;
    for(i=1;i<30000;i++){
        j=factor(i);
        if(factor(j)==i){
            printf("%d %d\n",i,j);
        }
    }
}

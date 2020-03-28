#include <stdio.h>
int a[30005];
void find(int j)
{
    int sum=0,i,cnt=0;
    for(i=1;i<j;i++){
        if(j%i==0){
            a[cnt++]=i;
            sum+=i;
            if(sum>j) break;
        }
    }
    if(sum==j){
        printf("%d:",sum);
        for(i=0;i<cnt;i++){
            printf("%d\t",a[i]);
        }
        printf("\n");
    }
    return ;
}
void main()
{
    int i;
    for(i=1;i<30000;i++){
        find(i);
    }
}

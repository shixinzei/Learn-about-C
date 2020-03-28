#include <stdio.h>
int max,min,i;
float ave,sum=0;
void deal(int a[],int n)
{
    max=a[0],min=a[0],sum=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
        sum+=a[i];
    }
    ave=sum/n;
    printf("max:%d\n",max);
    printf("min:%d\n",min);
    printf("ave:%.4f\n",ave);
}
void main()
{
    int a[10]={12,232,34,45,34,21,321,43,5454,122};
    deal(a,10);
}

#include <stdio.h>
int sum,i;
void main()
{
    int director,a[10];
    float aver;
    float average(int s[],int n);
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    aver=average(a,10);
    printf("sum=%d\n",sum);
    printf("average=%.2f\n",aver);
}
float average(int s[],int n)
{
    int director;
    float ave;
    sum=0;
    for(i=0;i<n;i++){
        sum+=s[i];
    }
    ave=sum/(float)n;
    return ave;
}

#include <stdio.h>
int n=10;
void minmax(int s[])
{
    int max=s[0],min=s[0];
    float sum=0,avg;
    int i;
    for(i=0;i<n;i++){
        if(s[i]>max) max=s[i];
        if(s[i]<min) min=s[i];
        sum+=s[i];
    }
    avg=sum/10;
    printf("max:%d,min:%d,avg:%f\n",max,min,avg);
}
void main()
{
    int s[10];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    minmax(s);
}

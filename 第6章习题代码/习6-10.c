#include <stdio.h>
int n=10;
void minlocat(int a[])
{
    int i,j=0,min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            j=i;
        }
    }
    printf("min num locate:%d\n",j+1);
}
void min(int a[])
{
    int i,min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    printf("min num:%d\n",min);
}
void main()
{
    int a[]={1222,321,12,32,435,54,657,57,9,10};
    minlocat(a);
    min(a);
}

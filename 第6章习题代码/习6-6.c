#include <stdio.h>
int find(int i,int j)
{
    int temp,a,b;
    if(i<j){
        temp=i;
        i=j;
        j=temp;
    }
    a=i;
    b=j;
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return i*j/a;
}
void main()
{
    int i,a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<5;i++){
        a[i]=find(a[i],a[i-1]);
    }
    printf("%d\n",a[4]);
}

#include <stdio.h>
void isort(int a[],int n)
{
    int i;
    for(i=0;i<n/2;i++){
        int tmp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=tmp;
    }
}
void main()
{
    int a[]={12,34,54,6,56,7,67,432,546,46};
    int i,n=10;
    printf("before isort:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nafter isort:\n");
    isort(a,n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

#include <stdio.h>
void insert(int a[],int n)
{
    int i,s;
    for(i=0;i<10;i++){
        if(n>a[i]){
            for(s=9;s>=i;i--){
                a[s+1]=a[s];
            }
            break;
        }
    }
    a[i]=n;
}
void main()
{
    int i,j,p,q,s,n,a[11]={127,3,6,28,54,68,87,105,162,18};
    for(i=0;i<10;i++){
        p=i;
        q=a[i];
        for(j=i+1;j<10;j++){
            if(q<a[j]){
                p=j;
                q=a[j];
            }
        }
        if(p!=i){
            s=a[i];
            a[i]=a[p];
            a[p]=s;
        }
        printf("%d ",a[i]);
    }
    printf("\ninput numeber:\n");
    scanf("%d",&n);
    insert(a,n);
    for(i=0;i<11;i++){
        printf("%d ",a[i]);
    }
}

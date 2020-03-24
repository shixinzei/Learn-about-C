#include <stdio.h>
void main()
{
    int data[10],i,*p;
    for(i=0;i<10;i++) data[i]=i+1;
    p=data;
    for(i=0;i<10;i++){
        printf("*(p+%d)=%d\t",i,*(p+i));
        printf("data(%d)=%d\n",i,data[i]);
    }
}

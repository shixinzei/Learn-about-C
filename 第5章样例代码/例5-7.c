#include <stdio.h>
void main()
{
    static int a[3][4]={1,3,4,5,13,43,453,342,243,321,12,32};
    int *p;
    for(p=a[0];p<a[0]+12;p++){
        if((p-a[0])%4==0) printf("\n");
        printf("%4d\t",*p);
    }
}

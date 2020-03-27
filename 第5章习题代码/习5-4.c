#include <stdio.h>
void main()
{
    int data[12]={12,34,56,12,34,56,3,54,6,7,89,12};
    int i,sum=0;
    int *q;
    q=data;
    for(i=0;i<12;i++){
        //sum+=data[i];
        sum+=*q;
        q++;
    }
    printf("The sum is %d\n",sum);
}

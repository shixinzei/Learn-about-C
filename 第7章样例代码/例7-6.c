#include <stdio.h>
#include "7-6.h"
int a[10];
int max,min;
void main()
{
    int director,i;
    void find();
    printf("Enter data:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    find();
    printf("The Max number:%d\n",max);
    printf("The Min number:%d\n",min);
}


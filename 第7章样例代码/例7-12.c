#include <stdio.h>
#define ABS(x) ((x)>0)?(x):(-x)
void main()
{
    int a,b;
    float c;
    a=-100,b=0,c=-100.0;
    printf("%d's abs is :%d\n",a,ABS(a));
}

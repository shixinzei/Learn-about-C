#include <stdio.h>
void main()
{
    int num[]={23,45,345,23};
    int *point;
    point=num;
    //Q1 num[2]��ֵ
    printf("%d\n",num[2]);
    //Q2 *(point+2)��ֵ
    printf("%d\n",*(point+2));
    //Q3 *++point��ֵ
    printf("%d\n",*++point);
}

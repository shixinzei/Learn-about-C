#include <stdio.h>
void main()
{
    union
    {
        char ch;
        int num;
        float fnum;
    }value;
    value.num=200;
    printf("num=%d\n",value.num);
    printf("num=%f\n",value.num);//�������ȷ
    value.fnum=333.5;
    printf("fnum=%f\n",value.fnum);
    printf("fnum=%d\n",value.fnum);//�������ȷ
    value.ch='A';
    printf("ch=%c\n",value.ch);
    printf("The size of value is %d bytes\n",sizeof(value));
}

#include <stdio.h>
//�ڲ��������ⲿ����ͬ�� �ⲿ������
void f1()
{
    int m=200;
    printf("m=%d\n",m);
    {
        int m=300;
        printf("m=%d\n",m);
    }
}
int m=100;
void main()
{
    f1();
    printf("m=%d\n",m);
}

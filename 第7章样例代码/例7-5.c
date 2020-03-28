#include <stdio.h>
//内部变量与外部变量同名 外部被屏蔽
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

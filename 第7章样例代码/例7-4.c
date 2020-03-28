#include <stdio.h>
//外部变量作用域向上扩展到本函数
int n;
void f1()
{
    extern m;
    printf("m=%d\n",m);
}
int m=100;
void main()
{
    n=200;
    f1();
    printf("n=%d\n",n);
}

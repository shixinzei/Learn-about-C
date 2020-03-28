#include <stdio.h>
//全局变量 自动变量 静态局部变量
int c;
void main()
{
    int i,a=1,b=2;
    void test();
    c=3;
    printf("----test----\n");
    for(i=1;i<3;i++){
        test();
    }
    printf("----main----\n");
    printf("a=%d\tb=%d\tc=%d\n",a,b,c);
}
void test()
{
    static int a=0;
    auto int b=0;
    a++;
    b++;
    c++;
    printf("a=%d\tb=%d\tc=%d\n",a,b,c);
}

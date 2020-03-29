#include <stdio.h>
void main()
{
    void add();
    float a=1.0,b=2.0,c=3.0;
    printf("a=%f,b=%f,c=%f\n",a,b,c);
    add();
    add();
}
void add()
{
    int a=1;
    register int b=1;
    static int c=1;
    a=a+a;
    b=b+b;
    c=c+c;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
}

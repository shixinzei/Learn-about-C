#include <stdio.h>
//��̬�ֲ�����
int fact(int n)
{
    static int f=1;
    f*=n;
    return f;
}
void main()
{
    int i;
    for(i=1;i<=6;i++){
        printf("%d!=%d\n",i,fact(i));
    }
}

#include <stdio.h>
//����Ĵ�
void main()
{
    int i,j,*p,*q;
    char ch1,ch2,*t,*s;
    i=3;
    p=&i;//ԭ��p=i;
    j=*p/2+10;
    q=p;//ԭ��q=*p;
    ch1='a';
    s=&ch1;
    *s='c';
    *t='b';//ԭ��t='b';
    ch2=*t;
}

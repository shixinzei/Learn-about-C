#include <stdio.h>
//程序改错
void main()
{
    int i,j,*p,*q;
    char ch1,ch2,*t,*s;
    i=3;
    p=&i;//原：p=i;
    j=*p/2+10;
    q=p;//原：q=*p;
    ch1='a';
    s=&ch1;
    *s='c';
    *t='b';//原：t='b';
    ch2=*t;
}

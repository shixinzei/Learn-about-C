#include <stdio.h>
#define END '*'
void main()
{
    int ch;
    ch=getchar();
    while(ch!=END){
        putchar(ch);
        ch=getchar();
    }
}

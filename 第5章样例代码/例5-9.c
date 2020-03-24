#include <stdio.h>
void main()
{
    char str[]="CD";
    char *ps=str;
    while(*ps){
        putchar(*ps);
        ps++;
    }
}

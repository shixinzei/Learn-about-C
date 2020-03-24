#include <stdio.h>
void main()
{
    char s[20];
    char *p;
    printf("please input a string:\n");
    scanf("%s",s);
    p=s;
    while(*p!='\0'){
        p++;
    }
    printf("The string length is:%d\n",p-s);
}

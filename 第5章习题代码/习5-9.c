#include <stdio.h>
void main()
{
    char str[100];
    char *q;
    printf("please input a string:\n");
    gets(str);
    q=str;
    int ch_num=0,digit_num=0;
    while(*q!='\0'){
        if(*q>='0'&&*q<='9') digit_num++;
        if((*q>='a'&&*q<='z')||(*q>='A'&&*q<='Z')) ch_num++;
        q++;
    }
    printf("char num:%d\n",ch_num);
    printf("digit num:%d\n",digit_num);
}

#include <stdio.h>
#include <string.h>
void count(char* str)
{
    int ch_num=0,digit_num=0,space_num=0,other_num=0;
    while(*str!='\0'){
        if(*str==' ') space_num++;
        else if(*str>='a'&&*str<='z'){
            ch_num++;
        }else if(*str>='A'&&*str<='Z'){
            ch_num++;
        }else if(*str>='0'&&*str<='9'){
            digit_num++;
        }else{
            other_num++;
        }
        str++;
    }
    printf("ch:%d,digit:%d,space:%d,other:%d\n",ch_num,digit_num,space_num,other_num);
}
void main()
{
    char st[100];
    printf("input a str:\n");
    gets(st);
    count(st);
}

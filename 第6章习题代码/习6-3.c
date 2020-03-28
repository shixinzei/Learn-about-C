#include <stdio.h>
char newstr[100];
void del(char* str)
{
    int i=0;
    while(*str!='\0'){
        if((*str>='a'&&*str<='z')||(*str>='A'&&*str<='Z')||(*str>='0'&&*str<='9')){
            newstr[i]=*str;
            str++;
            i++;
        }else{
            while(*str==*(str+1)){
                str++;
            }
            newstr[i]=*str;
            str++;
            i++;
        }
    }
}
void main()
{
    char s[100];
    gets(s);
    del(s);
    printf("newstring:%s\n",newstr);
}

#include <stdio.h>
void main()
{
    char str[30],*ptr;
    int i;
    printf("please input a string:\n");
    scanf("%s",&str);
    ptr=str;
    while(*ptr!='\0'){
        if((*ptr>='a')&&(*ptr<='z')){
            *ptr-=32;
        }
        ptr++;
    }
    printf("%s\n",str);
}

#include <stdio.h>
void main()
{
    char s1[30],s2[30];
    char *p=s1,*q=s2;
    scanf("s1=%s\ns2=%s",&s1,&s2);
    while(*p!='\0'){
        p++;
    }
    while(*q!='\0'){
        *p++=*q++;
    }
    *p='\0';
    printf("%s\n",s1);
}

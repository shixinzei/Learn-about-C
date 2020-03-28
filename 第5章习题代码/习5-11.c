#include <stdio.h>
void main()
{
    char s1[100],s2[100];
    printf("input first string:\n");
    gets(s1);
    printf("input second string:\n");
    gets(s2);
    char *q,*p;
    q=s1,p=s2;
    int flag=1;
    while((*q!='\0')||(*p!='\0')){
        if(*q!=*p){
            flag=0;
            break;
        }
        q++;
        p++;
    }
    if(flag) printf("The same string\n");
    else printf("The different string\n");
}

#include <stdio.h>
#include <string.h>
int cmp(char s1[],char s2[])
{
    int i=0;
    while(s1[i]==s2[i]&&(s1[i]!='\0')){
        i++;
    }
    if(s1[i]=='\0'&&s2[i]=='\0'){
        return 0;
    }
    return s1[i]-s2[i];
}
void main()
{
    char s1[100],s2[100];
    printf("input a string:\n");
    gets(s1);
    printf("input another string:\n");
    gets(s2);
    printf("%d\n",cmp(s1,s2));
}

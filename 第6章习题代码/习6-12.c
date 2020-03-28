#include <stdio.h>
#include <string.h>
void copy(char s1[],char s2[])
{
    int i=0;
    while(s2[i]!='\0'){
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}
void copy2(char s1[],char s2[])
{
    int i;
    for(i=0;i<=strlen(s1);i++) s2[i]=s1[i];
}
void main()
{
    char s1[100]="dsdasad",s2[100]="ghhghf",s3[100]="5644";
    printf("s1:%s\n",s1);
    printf("s2:%s\n",s2);
    copy(s1,s2);
    printf("new s1:%s\n",s1);
    copy2(s3,s1);
    printf("\ns1:%s\n",s1);
    printf("s3:%s\n",s3);

}

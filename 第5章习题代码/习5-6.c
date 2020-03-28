#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100],s2[100];
    printf("input first string:\n");
    gets(s1);
    printf("input second string:\n");
    gets(s2);
    int i,j;
    int len1=strlen(s1),len2=strlen(s2);
    int st[100],cnt=0,t=-1,flag=1;
    i=0,j=0;
    while(i<len1){
        flag=1;
        t=-1;
        j=0;
        while(j<len2){
            if(s1[i]!=s2[j]){
                flag=0;
                break;
            }else{
                if(t<0) t=i;
                i++;
                j++;
            }
        }
        if(flag) st[cnt++]=t;
        else i++;
    }
    printf("count:%d\nstart:",cnt);
    for(i=0;i<cnt;i++){
        printf("%d ",st[i]);
    }
}
//Ö¸Õë°æ
#include <stdio.h>
void main()
{
    char s1[100],s2[10];
    char *p,*q;
    int locat[10];
    int j,len2,i=0,posit=0;
    printf("input first string:\n");
    gets(s1);
    printf("input second string:\n");
    gets(s2);
    q=s2;
    for(j=0;*q!='\0';j++,q++){
        len2=j+1;
    }
    p=s1;
    q=s2;
    do
    {
        if(*p!=*q){
            q++;
            posit++;
        }
        else{
            while((*q!='\0')&&(*q==*p)){
                q++;
                p++;
                posit++;
            }
            if(*q=='\0'){
                locat[i]=posit-len2;
                i++;
            }
        }
        q=s2;
    }while(*p!='\0');
    printf("count:%d\nstart:",i);
    for(j=0;j<i;j++){
        printf("%d ",locat[j]);
    }
}

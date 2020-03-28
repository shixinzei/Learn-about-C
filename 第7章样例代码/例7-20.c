#include <stdio.h>
//进制转换
int b;
int i=0;
int c[50];
int n;
void main()
{
    char base[]="0123456789ABCDEF";
    int j,m;
    void convert();
    printf("输入一个10进制的数:\n");
    scanf("%d",&n);
    printf("输入数值基数:\n");
    scanf("%d",&b);
    m=n;
    convert();
    printf("%d转换成%d进制数为：",m,b);
    for(i--;i>=0;i--){
        j=c[i];
        printf("%c",base[j]);
    }
    printf("\n");
}
void convert()
{
    while(n!=0){
        c[i]=n%b;
        n=n/b;
        i++;
    }
}

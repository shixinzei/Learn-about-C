#include <stdio.h>
//����ת��
int b;
int i=0;
int c[50];
int n;
void main()
{
    char base[]="0123456789ABCDEF";
    int j,m;
    void convert();
    printf("����һ��10���Ƶ���:\n");
    scanf("%d",&n);
    printf("������ֵ����:\n");
    scanf("%d",&b);
    m=n;
    convert();
    printf("%dת����%d������Ϊ��",m,b);
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

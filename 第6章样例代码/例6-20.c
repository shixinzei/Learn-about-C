//��������в����ĸ���������������
#include <stdio.h>
void main(int argc,char *argv[])
{
    int i;
    printf("\n�������п�ִ���ļ���Ϊ��%s",argv[0]);
    printf("\n�ܹ���%d��������",argc);
    i=0;
    while(argc>=0){
        printf("%s\t",argv[i++]);
        argc--;
    }
}

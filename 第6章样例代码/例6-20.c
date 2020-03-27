//输出命令行参数的个数及参数的内容
#include <stdio.h>
void main(int argc,char *argv[])
{
    int i;
    printf("\n命令行中可执行文件名为：%s",argv[0]);
    printf("\n总共有%d个参数：",argc);
    i=0;
    while(argc>=0){
        printf("%s\t",argv[i++]);
        argc--;
    }
}

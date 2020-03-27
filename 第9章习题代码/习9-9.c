//将文件1的内容追加到文件2后面
#include <stdio.h>
void main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    char ch;
    if(argc!=3){
        printf("Usage:source finename and target filename");
        exit(1);
    }
    if((fp1=fopen(argv[1],"r"))==NULL){
        printf("can not open source file\n");
        exit(1);
    }
    if((fp2=fopen(argv[2],"a"))==NULL){
        exit(1);
    }
    while((ch=getc(fp1))!=EOF){
        putc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}

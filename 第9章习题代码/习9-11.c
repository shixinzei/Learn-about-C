//每次显示20行，再键入一个字符如果为q就停止否则继续显示
#include <stdio.h>
#include <stdlib.h>
void main(int argc,char *argv[])
{
    FILE *fp;
    int c,cnt=1;
    char ch='c';
    if(argc==1) printf("Usage:listfile fine_name\n");
    else if(argc>2) printf("Too many arguments to list file\n");
    else if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can't open %s\n",argv[1]);
        exit(0);
    }else{
        while((c=getc(fp))!=EOF&&(ch!='q'&&ch!='Q')){
            putc(c,stdout);
            if(c=='\n') cnt++;
            if(cnt==3){
                ch=getchar();
                cnt=0;
            }
        }
        fclose(fp);
    }
}

#include <stdio.h>
void main(int argc,char *argv[])
{
    FILE *in,*out;
    char ch;
    if(argc!=3){
        printf("Usage:source finename and target filename");
        exit(1);
    }
    if((in=fopen(argv[1],"rb"))==NULL){
        printf("can not open %s\n",argv[1]);
        exit(1);
    }
    if((out=fopen(argv[2],"wb"))==NULL){
        printf("can not open %s\n",argv[2]);
        exit(1);
    }
    while(!feof(in)){
        ch=getc(in);
        if(ch>='a'&&ch<='z'){
            ch-=32;
        }
        putc(ch,out);
    }
    fclose(in);
    fclose(out);
}

//¿½±´ÎÄ¼þ
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
        printf("can not open source file\n");
        exit(1);
    }
    if((out=fopen(argv[2],"wb"))==NULL){
        exit(1);
    }
    while(!feof(in)){
        ch=getc(in);
        putc(ch,out);
    }
    fclose(in);
    fclose(out);
}

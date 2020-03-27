#include <stdio.h>
#include <stdlib.h>
#define SIZENUMB 180
void main(int argc,char *argv[])
{
    FILE *fp;
    char line[SIZENUMB];
    int c,ch_num=0,line_num=0,size;
    if(argc==1) printf("Usage:listfile fine_name\n");
    else if(argc>2) printf("Too many arguments to list file\n");
    else if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can't open %s\n",argv[1]);
        exit(0);
    }else{
        while((c=getc(fp))!=EOF){
            ch_num++;
            putc(c,stdout);
            if(c=='\n') line_num++;
        }
        printf("character num is %d\n",ch_num);
        printf("line num is %d\n",line_num);
        fclose(fp);
    }
}

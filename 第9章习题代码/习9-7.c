#include <stdio.h>
#include <stdlib.h>
#define SIZENUMB 180
void main(int argc,char *argv[])
{
    FILE *fp;
    char line[SIZENUMB];
    int c,ch_num=0,max_num=0,size;
    if(argc==1) printf("Usage:listfile fine_name\n");
    else if(argc>2) printf("Too many arguments to list file\n");
    else if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can't open %s\n",argv[1]);
        exit(0);
    }else{
        while((c=getc(fp))!=EOF){
            ch_num++;
            putc(c,stdout);
            if(c=='\n'){
                if(ch_num>max_num) max_num=ch_num;
                ch_num=0;
            }
        }
        printf("character max num is %d\n",max_num);
        fclose(fp);
    }
}

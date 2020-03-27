#include <stdio.h>
#include <stdlib.h>
void main(int argc,char *argv[])
{
    FILE *fp;
    int c,cnt;
    if(argc==1) printf("Usage:listfile fine_name\n");
    else if(argc>2) printf("Too many arguments to list file\n");
    else if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can't open %s\n",argv[1]);
        exit(0);
    }else{
        cnt=0;
        while((c=getc(fp))!=EOF){
            putc(c,stdout);
            cnt++;
        }
        printf("cnt:%d\n",cnt);
        fclose(fp);
    }
}

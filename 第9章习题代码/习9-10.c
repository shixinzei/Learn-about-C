//键入m和n，并输出m行到n行的字符
#include <stdio.h>
#include <stdlib.h>
void main(int argc,char *argv[])
{
    FILE *fp;
    int c,m,n,cnt=1;
    if(argc==1) printf("Usage:listfile fine_name\n");
    else if(argc>2) printf("Too many arguments to list file\n");
    else if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can't open %s\n",argv[1]);
        exit(0);
    }else{
        printf("please input two numbers:\n");
        scanf("%d%d",&m,&n);
        while((c=getc(fp))!=EOF){
            if(cnt>=m&&cnt<=n) putc(c,stdout);
            if(c=='\n') cnt++;
        }
        fclose(fp);
    }
}

#include <stdio.h>
void main(int argc,int *argv[])
{
    FILE *fp;
    if(argc==1){
        printf("usage:no linenum filename\n");
        exit(0);
    }else if(argc>2){
        printf("Too many arguments to linenum\n");
        exit(0);
    }else if((fp=fopen(argv[1],"w"))==NULL){
        printf("can't open %s\n",argv[1]);
        exit(0);
    }else{
        printf("please input information through keyboard\n");
        char ch;
        while((ch=getchar())!='\n'){
            putc(ch,fp);
        }
    }
    fclose(fp);
}

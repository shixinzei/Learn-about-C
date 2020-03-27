#include <stdio.h>
#define SIZENUMB 180
void main(int argc,char *argv[])
{
    FILE *fp;
    char line[SIZENUMB];
    int row,size;
    if(argc==1) printf("Usage:linenum filename\n");
    else if(argc>2) printf("Too many arguments to linenum \n");
    else if((fp=fopen(argv[1],"r"))==NULL){
        printf("Can't open %s\n",argv[1]);
        exit(0);
    }else{
        row=0;
        while(fgets(line,size,fp)){
            printf("%3d:%s",++row,line);
        }
        fclose(fp);
    }
}

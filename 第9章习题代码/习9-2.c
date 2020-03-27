#include <stdio.h>
void main(int argc,int *argv[])
{
    FILE *fp;
    int i;
    char *buf[4]={"Data Structure","Operating System","Computer Graphics","Software Engineering"};
    if((fp=fopen("test.txt","w"))==NULL){
        printf("can't open %s\n","myfile");
        exit(0);
    }else{
        for(i=0;i<4;i++){
            fputs(buf[i],fp);
            putc('\n',fp);
        }
    }
    fclose(fp);
}

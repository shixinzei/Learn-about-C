#include <stdio.h>
void main(int argc,char *argv[])
{
    if(argc!=3){
        printf("Enter two arguments\n");
        exit(0);
    }
    printf("DATA STRUCTURE----%s\n",argv[1]);
    printf("OPERATING SYSTEM----%s\n",argv[2]);
}

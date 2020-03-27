#include <stdio.h>
void main()
{
    FILE *fp;
    if((fp=fopen("test","rb"))==NULL){
        printf("can't open file\n");
        exit(0);
    }
    fseek(fp,10L,0);
    printf("%c",getc(fp));
}

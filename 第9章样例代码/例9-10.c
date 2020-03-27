#include <stdio.h>
void main()
{
    FILE *fp;
    static int buffer[10];
    int i;
    fp=fopen("arrdata","rb");
    fread((char*)buffer,2,20,fp);
    fclose(fp);
    for(i=0;i<10;i++){
        printf("%d\n",buffer[i]);
    }
}

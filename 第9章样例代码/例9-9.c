#include <stdio.h>
void main()
{
    static int buffer[]={100,110,120,130,140,150,160,170,180,190};
    FILE *fp;
    int director;
    fp=fopen("arrdata","wb");
    fwrite((char*)buffer,2,20,fp);
    fclose(fp);
}

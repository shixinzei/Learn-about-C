#include <stdio.h>
#define MAX 5
void main(int argc,char *argv[])
{
    FILE *fp1,*fp2;
    char c1,c2;
    int crow=0,cchar=0;
    static int row[MAX][2];
    int i=0;
    int j,sign;
    if(argc!=3){
        printf("Usage:source finename and target filename");
        exit(1);
    }
    if((in=fopen(argv[1],"rb"))==NULL){
        printf("can not open source file\n");
        exit(1);
    }
    if((out=fopen(argv[2],"rb"))==NULL){
        exit(1);
    }
    crow++;
    c1=getc(fp1);
    c2=getc(fp2);
    while(!feof(fp1)&&!feof(fp2)){
        sign=0;
        cchar++;
        while(c1!='\n'&&c2!='\n'){
            if(c1!=c2&&sign==0){
                i++;
                row[i][0]=crow;
                row[i][1]=cchar;
                sign=1;
            }
            c1=getc(fp1);
            c2=getc(fp2);
            cchar++;
        }
        while(c2=='\n'&&c1!='\n'){
            c1=getc(fp1);
        }
        while(c1=='\n'&&c2!='\n'){
            c2=getc(fp2);
        }
        crow++;
        cchar=0;
        c1=getc(fp1);
        c2=getc(fp2);
    }
    for(j=1;j<=i;j++){
        printf("%d %d\n",row[j][0],row[j][1]);
    }
    fclose(fp1);
    fclose(fp2);
}

#include <stdio.h>
#include <string.h>
void sort(char cs[5][20])
{
    int i,j,p;
    char st[20];
    for(i=0;i<5;i++){
        p=i;
        strcpy(st,cs[i]);
        for(j=i+1;j<5;j++){
            if(strcmp(cs[j],st)<0){
                p=j;
                strcpy(st,cs[j]);
            }
        }
        if(p!=i){
            strcpy(st,cs[i]);
            strcpy(cs[i],cs[p]);
            strcpy(cs[p],st);
        }
        puts(cs[i]);
    }
}
void main()
{
    char cs[5][20];
    int i;
    printf("input 5 country's name:\n");
    for(i=0;i<5;i++){
        gets(cs[i]);
    }
    printf("\n");
    sort(cs);
}

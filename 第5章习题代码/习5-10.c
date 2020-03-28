#include <stdio.h>
void main()
{
    char *point[]={
        "11111111",
        "22222222",
        "33333333",
        "44444444",
        "55555555"
    };
    int i,j;
    for(i=1;i<3;i++){
        for(j=1;j<5;j++){
            printf("%c",*(point[j]+i));
        }
        printf("\n");
    }
}

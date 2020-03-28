#include <stdio.h>
int b[3][5];
void tran(int array[5][3])
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            b[j][i]=array[i][j];
        }
    }
}
void main()
{
    int array[5][3]={{1,0,1},{2,1,2},{3,1,4},{1,3,40},{2,34,1}};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }
    tran(array);
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
}

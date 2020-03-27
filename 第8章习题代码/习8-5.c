#include <stdio.h>
enum onth
{
    JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
}month;
void main()
{
    month=JAN;
    printf("%d\n",month);
    month=MAY;
    printf("%d\n",month);
    month=DEC;
    printf("%d\n",month);
    int i;
    for(i=JAN;i<DEC;i++){
        printf("NEW YEAR\n");
    }
}

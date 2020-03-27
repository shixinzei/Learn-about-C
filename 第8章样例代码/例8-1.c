#include <stdio.h>
struct bit
{
    unsigned b0:1,b1:1,b2:1,b3:1,b4:1,b5:1,b6:1,b7:1;
}*sp;
static char data[]="abcedf";
void main()
{
    int bit_sum,parity;
    char *dp;
    dp=data;
    while(*dp!='\0'){
        sp=(struct bit*)dp;
        bit_sum=sp->b0+sp->b1+sp->b2+sp->b3+sp->b4+sp->b5+sp->b6;
        parity=bit_sum%2;
        printf("%c",*dp);
        printf("%d%d%d%d%d%d%d%d\n",parity,sp->b6,sp->b5,sp->b4,sp->b3,sp->b2,sp->b2,sp->b1,sp->b0);
        dp++;
    }
}

#include <stdio.h>
struct bits
{
    unsigned b0:1,b1:1,b2:1,b3:1,b4:4;
};
void main()
{
    struct bits modern={0,1,1,0,1};
    printf("b0:%d\nb1:%d\nb2:%d\nb3:%d\nb4:%d",modern.b0,modern.b1,modern.b2,modern.b3,modern.b4);
}

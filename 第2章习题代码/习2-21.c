#include <stdio.h>
void main()
{
    int x,y,z;
    x=y=z=1;
    x+=y+=z;
    printf("(1)%d\n",x<y?y:x);
    printf("(2)%d\n",x<y?x++:y++);
    printf("x=%d,y=%d\n",x,y);
    printf("(3)%d\n",z+=x<y?x++:y++);
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    x=5;
    y=z=6;
    printf("(4)%d\n",(z>=y>=x)?1:0);
    printf("(5)%d\n",z>=y&&y>=x);
}

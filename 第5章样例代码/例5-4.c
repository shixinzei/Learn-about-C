#include <stdio.h>
void main()
{
    int *px,*py;
    static int a[6]={10,20,30,40,50,60};
    px=&a[0];
    py=&a[5];
    printf("px=%x py=%x\n",px,py);
    printf("py-px=%x",py-px);
}

#include <stdio.h>
void main()
{
    int u1,u2,v=3;
    int *pv;
    u1=2*(v+5); //16
    pv=&v; //3µÄµØÖ·
    u2=2*(*pv+5); //16
    printf("u1=%d u2=%d",u1,u2);
}

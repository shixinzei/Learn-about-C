#include <stdio.h>
void main()
{
    int u=5,v,*pu,*pv;
    pu=&u; //u的地址
    v=*pu; //v=5
    pv=&v; //v的地址 也就是u的地址
    //&pu u的地址的地址
    printf("u=%d &u=%x pu=%x *pu=%d &pu=%x",u,&u,pu,*pu,&pu);
    printf("\nv=%d &v=%x pv=%x *pv=%d &pv=%x",v,&v,pv,*pv,&pv);
}

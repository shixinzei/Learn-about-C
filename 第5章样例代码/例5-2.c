#include <stdio.h>
void main()
{
    int u=5,v,*pu,*pv;
    pu=&u; //u�ĵ�ַ
    v=*pu; //v=5
    pv=&v; //v�ĵ�ַ Ҳ����u�ĵ�ַ
    //&pu u�ĵ�ַ�ĵ�ַ
    printf("u=%d &u=%x pu=%x *pu=%d &pu=%x",u,&u,pu,*pu,&pu);
    printf("\nv=%d &v=%x pv=%x *pv=%d &pv=%x",v,&v,pv,*pv,&pv);
}

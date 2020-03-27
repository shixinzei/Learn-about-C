#include <stdio.h>
#include <math.h>
struct complex
{
    float x,y,m;
};
void main()
{
    struct complex a[10],*maxnum,*p=a;
    int i,n=10;
    struct complex *findmax(struct complex *p,int n);
    for(i=0;i<n;i++){
        scanf("%f%f",&(p+i)->x,&(p+i)->y);
        printf("\n输入的复数是：%.4f+%.4f\n",(p+i)->x,(p+i)->y);
        (p+i)->m=sqrt((p+i)->x*(p+i)->x+(p+i)->y*(p+i)->y);
    }
    maxnum=findmax(a,n);
    printf("\n模最大的复数是：%.4f+%.4f\n",maxnum->x,maxnum->y);
}
struct complex *findmax(struct complex *p,int n)
{
    int i,k=0;
    double t;
    t=p->m;
    for(i=1;i<n;i++){
        if(t<(p+i)->m){
            t=(p+i)->m;
            k=i;
        }
    }
    return (p+k);
}

#include <stdio.h>
#define shang(a,b) ((a)/(b))
#define yushu(a,b) ((a)%(b))
void main()
{
    int a,b,t1,t2;
    printf("input 2 numbers:\n");
    scanf("%d%d",&a,&b);
    shang(a,b);
    yushu(a,b);
    printf("a/b=%d,a%%b=%d\n",shang(a,b),yushu(a,b));
}

#include <stdio.h>
void main()
{
    int a,b;
    float x,y,z;
    char c1,c2;
    scanf("%5d%6d%c%c%f%f%*f%f",&a,&b,&c1,&c2,&x,&y,&z);
    printf("%d %d %c %c %f %f %f",a,b,c1,c2,x,y,z);
}

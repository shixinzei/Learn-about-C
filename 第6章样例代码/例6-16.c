#include <stdio.h>
#include <math.h>
struct POINT
{
    double x,y;
};
struct POINT mkpoint(double m,double n)
{
    struct POINT temp;
    temp.x=m;
    temp.y=n;
    return temp;
};
double distance(struct POINT p1,struct POINT p2)
{
    double x=p1.x-p2.x,y=p1.y-p2.y;
    return sqrt(x*x+y*y);
}
void main()
{
    struct POINT pt1,pt2;
    double d;
    pt1=mkpoint(3.0,20.0);
    pt2=mkpoint(pt1.x+5,0.0);
    d=distance(pt1,pt2);
    printf("Distance of point(%.2f,%.2f) and point(%.2f,%.2f) is %.2f\n",pt1.x,pt1.y,pt2.x,pt2.y,d);
}

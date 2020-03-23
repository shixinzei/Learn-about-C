#include <stdio.h>
#define PI 3.1415926
void main()
{
	float r,s,l;
	printf("请输入该圆的半径:");
	scanf("%f",&r);
	s=r*r*PI;
	l=2*PI*r;
	printf("该圆的面积为:%.2f\n",s);
	printf("该圆的周长为:%.2f\n",l);
}

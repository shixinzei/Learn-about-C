#include <stdio.h>
void main()
{
	float x=1234.56,y=1.23456789;
	double z=1234568.123456789;
	printf("x=%f,y=%f\n",x,y);
	printf("z=%f\n",z);
	printf("z=%e\n",z);
	printf("z=%g\n",z);
	printf("z=%18.8f\n",z);
	printf("x=%10.3f\n",x);
	printf("x=%-10.3f\n",x);
	printf("x=%4.3f\n\n",x);
}

#include <stdio.h>
#include <math.h>
int main()
{
	double s,m;
	int n,z;
	z=24;
	m=1.05;
	n=2012-1627;
	s=z*pow(m,n);
	printf("Balance as of December 31,2012,is %f\n",s);
	return 0;
} 

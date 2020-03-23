#include <stdio.h>
void main()
{
	int x,y,z;
	x=13;
	y=25;
	z=0;
	x=x&&y||z;
	printf("%d\n",x);
	printf("%d\n",x||!y&&z);
	x=013;
	y=025;
	z=01;
	printf("(1)%d\n",x|y&z);
	printf("(2)%d\n",x|y&~z);
	printf("(3)%d\n",x^y&~z);
	x=1;
	y=-1;
	x=x<<3;
	printf("%d\n",x);
	y<<=3;
	printf("%d\n",y);
}

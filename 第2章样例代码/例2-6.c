#include <stdio.h>
void main()
{
	int x,y=15,z;
	x=((19+60)%4>=19%5+60%5)?12:0;
	printf("x=%d\n",x);
	y+=z=x+30;
	printf("y=%d,z=%d\n",y,z);
	x=y=z=1;
	--x&&++y||z++;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
}

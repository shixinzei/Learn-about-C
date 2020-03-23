#include <stdio.h>
void main()
{
	int x,y,z,v;
	scanf("%d %d %d",&x,&y,&z);
	v=volume(x,y,z);
	printf("v=%d\n",v);
}

int volume(int a,int b,int c)
{
	int p;
	p=a*b*c;
	return (p);
}

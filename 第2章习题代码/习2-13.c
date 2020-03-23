#include <stdio.h>
void main()
{
	int a=1,b=2,c=3,d=0;
	d=(a>b?a:b)>c?(a>b?a:b):c;
	printf("%d",d); 
	int m=2,n=1;
	int x=m,y=n;
	x<y?(x=m,y=n):(x=n,y=m);
	printf("%d %d\n",m,n);
}

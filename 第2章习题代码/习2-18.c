#include <stdio.h>
void main()
{
	int sum=10,cap=10;
	cap=sum++,cap++,++cap;
	printf("%d\n",cap);
}

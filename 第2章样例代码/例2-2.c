#include <stdio.h>
void main()
{
	int i=10,j=10,k=10;
	i+=j;
	j+=k;
	k+=i;
	printf("(1)%d\n",i>j?i:j);
	printf("(2)%d\n",i>k?i--:k++);
	(i>=j>=k)?printf("ii"):printf("kk"); 
	printf("\n i=%d,j=%d,k=%d\n",i,j,k);
}

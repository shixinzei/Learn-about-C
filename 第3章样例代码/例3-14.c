#include <stdio.h>
void main()
{
	int k=1,j;
	while(k<=7){
		j=1;
		while(j<=k){
			putchar('*');
			j++;
		}
		putchar('\n');
		k++;
	}
}

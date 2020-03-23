#include <stdio.h>
void main()
{
	int i;
	unsigned number,temp;
	scanf("%u",&number);
	printf("%4x\n",number);
	for(i=15;i>=0;i--){
		temp=(number & 0x8000);
		temp>>=15;
		printf("%1x",temp);
		number<<=1;
	}
	printf("\n");
}

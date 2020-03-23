#include <stdio.h>
void main()
{
	int i;
	printf("ASCII code Decimal hexadecimal");
	printf("   ASCII code Decimal hexadecimal\n");
	i=32;
	while(i<=79){
		printf("%6c %6d 0x%04x",i,i,i);
		if((i+48)<127){
			printf("   %6c  %6d   0x%04x\n",i+48,i+48,i+48);
		}
		i++;
	}
}

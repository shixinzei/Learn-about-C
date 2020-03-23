#include <stdio.h>
void main()
{
	int year,leap;
	printf("input year: ");
	scanf("%d",&year);
	leap=year%4==0&&year%100!=0||year%400==0;
	if(leap) printf("%d is a leap year.\n",year);
	else printf(" %d is not a leap year.\n",year);
}

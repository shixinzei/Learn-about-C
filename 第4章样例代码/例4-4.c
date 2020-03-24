#include <stdio.h>
void main()
{
	int i,j;
	int ice[5][7]={{0,1,1,2,1,2,1},
				   {1,4,2,1,4,3,1},
				   {2,5,3,5,2,2,3},
				   {2,3,4,1,2,1,0},
				   {1,0,3,0,1,0,0}};
	int totalHeight=0;
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			totalHeight+=ice[i][j];
		}
	} 
	printf("冰山的体积为：%d立方米\n",totalHeight*100);
}

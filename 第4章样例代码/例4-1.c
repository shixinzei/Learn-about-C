#include <stdio.h>
void main()
{
	int score[10];
	int maxScore=0;
	int maxStudent=0;
	int i;
	for(i=0;i<10;i++){
		printf("请输入第%d位学生的成绩:",i);
		scanf("%d",&score[i]);
		if(maxScore<score[i]){
			maxScore=score[i];
		}
	}
	printf("本班最高分为%d\n",maxScore);
	printf("得到最高分的学生序号为:\n");
	for(i=0;i<10;i++){
		if(score[i]==maxScore){
			maxStudent++;
			printf("%d\n",i);
		}
	}
	printf("共有%d位学生得到最高分\n",maxStudent);
}

#include <stdio.h>
void main()
{
    float temp,sum;
    char ch,operat;
    printf("please input a digital expression:");
    scanf("%f",&sum);
    ch=getchar();
    while(ch!=';'){
        scanf("%f",&temp);
        switch(ch){
            case '+':sum+=temp;break;
            case '-':sum-=temp;break;
            default:printf("error\n");
        }
        ch=getchar();
    }
    printf("%f\n",sum);
}

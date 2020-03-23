#include <stdio.h>
void main()
{
    int number,digit,flag;
    scanf("%d",&number);
    if(number<0){
        number=-number;
        flag=1;
    }
    do{
        digit=number%10;
        printf("%d",digit);
        number/=10;
    }while(number!=0);
    if(flag) printf("-");
    printf("\n");
}

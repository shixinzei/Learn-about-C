#include <stdio.h>
struct stu
{
    int num;
    char *name;
    char sex;
    float score;
}boy[5]={
    {101,"Li ping",'M',45},
    {102,"Zhang ping",'M',62.5},
    {103,"He fang",'F',92.5},
    {104,"Cheng ling",'F',87},
    {105,"Wang ming",'M',58}
};
void main()
{
    struct stu *p;
    void ave(struct stu *ps);
    p=boy;
    ave(p);
}
void ave(struct stu *ps)
{
    int c=0,i;
    float ave,s=0;
    for(i=0;i<5;i++){
        s+=ps->score;
        if(ps->score<60) c++;
    }
    printf("s=%f\n",s);
    ave=s/5;
    printf("average=%f\nNo pass student count=%d\n",ave,c);
}

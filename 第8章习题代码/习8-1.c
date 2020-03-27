#include <stdio.h>
union body
{
    struct BYTE
    {
        unsigned char low,high;
    }byte;
    unsigned int word;
}a,b;
union body swap(union body x)
{
    union body y;
    y.byte.low=x.byte.high;
    y.byte.high=x.byte.low;
    return y;
}
void main()
{
    printf("Enter data?");
    scanf("%x",&a.word);
    b=swap(a);
    printf("%x-->%x\n",a.word,b.word);
}

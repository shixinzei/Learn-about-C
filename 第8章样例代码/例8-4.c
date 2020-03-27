#include <stdio.h>
void main()
{
    union body
    {
        struct BYTE
        {
            unsigned char low,high;
        }byte;
        unsigned int word;
    }a,b;
    printf("Enter data?");
    scanf("%x",&a.word);
    b.byte.high=a.byte.low;
    b.byte.low=a.byte.high;
    printf("%x-->%x\n",a.word,b.word);
}

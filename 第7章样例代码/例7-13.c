#include <stdio.h>
#define EVEN(a) a%2==0?1:0
//������
void main()
{
    if(EVEN(9+1)) printf("is even");
    else printf("is odd");
}

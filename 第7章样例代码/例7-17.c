#include <stdio.h>
#define MAX 100
void main()
{
    #if MAX>99
        printf("bigger than 99");
    #endif // MAX
}

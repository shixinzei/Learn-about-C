#include <stdio.h>
#define MAX 10
void main()
{
    #if MAX>99
        printf("bigger than 99");
    #else
        printf("small than 99");
    #endif // MAX
}

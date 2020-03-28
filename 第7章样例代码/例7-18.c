#include <stdio.h>
#define USA 1
void main()
{
    #ifdef USA
        printf("currency is dollar\n");
    #else
        printf("currency is pound\n");
    #endif // USA
    #ifndef FRANCE
        printf("france can't be used\n");
    #endif // FRANCE
}

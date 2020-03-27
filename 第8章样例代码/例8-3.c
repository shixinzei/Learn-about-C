#include <stdio.h>
#include <stdlib.h>
struct complex
{
    double re,im;
};
union value
{
    int int_val;
    double dbl_val;
    struct complex comp_val;
};
void main()
{
    union value number;
    printf("Size of entire union==%d\n",sizeof(union value));
    printf("Size of int member==%d\n",sizeof(number.int_val));
    printf("Size of double member==%d\n",sizeof(number.dbl_val));
    printf("Size of struct complex member==%d\n",sizeof(number.comp_val));
    printf("Size of complex re==%d\n",sizeof(number.comp_val.re));
    printf("Size of complex im==%d\n",sizeof(number.comp_val.im));

    printf("\n&number==%u\n",&number);
    printf("&number.int_val==%u\n",&number.int_val);
    printf("&number.dbl_val==%u\n",&number.dbl_val);
    printf("&number.comp_val==%u\n",&number.comp_val);
    printf("&number.comp_val.re==%u\n",&number.comp_val.re);
    printf("&number.comp_val.im==%u\n",&number.comp_val.im);
}

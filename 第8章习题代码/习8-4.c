#include <stdio.h>
enum coin
{
    penny,nickel,dime,quarter,half_dollar=50,dollar
};
void main()
{
    enum coin a;
    a=penny;
    printf("%d\n",a);
    a=nickel;
    printf("%d\n",a);
    a=dime;
    printf("%d\n",a);
    a=quarter;
    printf("%d\n",a);
    a=half_dollar;
    printf("%d\n",a);
    a=dollar;
    printf("%d\n",a);
}

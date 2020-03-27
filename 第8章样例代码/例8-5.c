#include <stdio.h>
enum day
{
    mon,wed,thu,fri
};
void study_day(enum day st_day);
void main()
{
    enum day a;
    for(a=mon;a<=fri;a++){
        study_day(a);
    }
}
void study_day(enum day st_day)
{
    switch(st_day)
    {
        case mon:printf("Mon c language\n");break;
        case wed:printf("Wed data structure\n");break;
        case thu:printf("Thu operating system\n");break;
        case fri:printf("Fri computer graphics\n");
    }
}

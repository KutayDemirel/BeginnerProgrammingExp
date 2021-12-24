#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Enter Year : ");
    scanf("%d", &year);

    if(((year %4 == 0) && (year %100 == 0)) || (year % 400== 0))
    {
        printf("LEAP YEAR");
    }

    else
    {
        printf("COMMON YEAR");
    }
    return 0;
}

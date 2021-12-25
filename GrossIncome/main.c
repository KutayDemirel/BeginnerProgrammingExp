#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic, gross, da, hra;

    printf("Please enter the basic income\n");
    scanf("%f", &basic);

    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.35;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = basic + hra + da;

    printf("Gross Income = %.2f", gross);

    return 0;
}

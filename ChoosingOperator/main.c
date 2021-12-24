#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Operator;
    float num1,num2,result = 0;

    printf(" Operator giriniz (+,-,*,/)  :  \n");
    scanf("%c", &Operator);

    printf("\n Lutfen iki sayi giriniz:  num1 and num2   :");
    scanf("%f%f", &num1, &num2);

    if(Operator == '+')
    {
        printf("\n Sonuç  :  %.2f + %.2f  =  %.2f \n", num1, num2, num1 + num2);
    }
    else if(Operator == '-')
    {
        printf("\n Sonuç  :  %.2f - %.2f  =  %.2f", num1, num2, num1 - num2);
    }
    else if(Operator == '*')
    {
        printf("\n Sonuç  :  %.2f * %.2f  =  %.2f", num1, num2, num1 * num2);
    }
    else if(Operator == '/')
    {
        printf("\n Sonuç  :  %.2f / %.2f  =  %.2f", num1, num2, num1 / num2);
    }
    else
    {
        printf("\n Uygun olmayan bir deger girdiniz" );
    }
    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,num;

    printf("fibonaccide Kac sayi acilmali:");
    scanf("%d",&num);

    a=0;
    b=1;
    c=0;

    printf("Fibonacci serisi\n");

    for(i=1;i<=num;i++){
            if(i==num)
                printf("%d",c);
            else
                printf("%d,",c);
                a=b;
                b=c;
                c=a + b;
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i, num, isPrime;

        isPrime =1;
        printf("Please enter number:");
        scanf("%d",&num);

        for(i=2; i<=num/2; i++){

            if(num%i==0){
                isPrime=0;
                break;
            }
        }

        if(isPrime ==1 && num>1)
            printf("%d is Prime number",num);
        else if(isPrime ==0 || num ==0 )
            printf("%d is not Prime Number",num);
        else
            printf("You entered negative number");

    return 0;
}

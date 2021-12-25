#include <stdio.h>
#include <stdlib.h>

int main()
{
        int num,i =2;

        printf("Please Enter a number   :");
        scanf("%d",&num);
        for(i;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        printf("Number %d",i);
        if(num ==i)
            printf(" is Prime Number");
        else
            printf(" is not Prime Number");

    return 0;
}

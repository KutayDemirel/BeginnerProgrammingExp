#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  int i, num;
  unsigned long long fact=1LL;

        printf("Bir sayi giriniz");
        scanf("%d",&num);

    for(i=2;i<=num;i++){
        fact = fact * i;
    }
        printf("%d sayisinin faktoriyeli : %llu'dir.",num, fact);
return 0
}


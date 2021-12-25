    int i, num, isPrime;

        isPrime =1;
        printf("Bir sayi giriniz:");
        scanf("%d",&num);

        for(i=2; i<=num/2; i++){

            if(num%i==0){
                isPrime=0;
                break;
            }
        }

        if(isPrime ==1 && num>1)
            printf("Prime number");
        else if(isPrime ==0 || num ==0 )
            printf("is not Prime Number");
        else
            printf("negatif sayi girdiniz");

    return 0;
}

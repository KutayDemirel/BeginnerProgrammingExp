#include <stdio.h>
#include <stdlib.h>

int main()
{
int baslangic, bitis, sayac;
    int toplam =0;

    printf("Baslangic sayisi giriniz:\n");
    scanf("%d",&baslangic);

    printf("Bitis sayisi giriniz:\n");
    scanf("%d",&bitis);

    if(bitis<baslangic)
        printf("Hatali sayi giriniz");
    else{
        for(sayac=baslangic; sayac <= bitis; sayac++){
        toplam = toplam + sayac;
    }
        printf("Toplam: %d",toplam);
    }
return 0;
}


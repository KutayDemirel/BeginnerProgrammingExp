#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birincisayi;
    int ikincisayi;
    int toplam, carpim, fark;
    float bolum;

    printf("Birinci sayiyi giriniz\n");
    scanf("%d",&birincisayi);
    printf("Ikinci sayiyi giriniz\n");
    scanf("%d",&ikincisayi);
    toplam=birincisayi+ikincisayi;
    fark=birincisayi-ikincisayi;
    carpim=birincisayi+ikincisayi;
    bolum=(float)birincisayi+ikincisayi;
    printf("Toplam= %d Fark= %d Carpim=%d Bolum=%f \n",toplam,fark,carpim,bolum);
    return 0;
}

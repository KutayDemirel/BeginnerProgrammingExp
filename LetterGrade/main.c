#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ogrenci_not;
    printf("Notu giriniz:");
    scanf("%d",&ogrenci_not);

    if (ogrenci_not<=0 && ogrenci_not<=60)
        printf("Harf karsiligi:FF");
    else if (ogrenci_not>60 && ogrenci_not<=65)
        printf("Harf karsiligi:DD");
    else if (ogrenci_not>65 && ogrenci_not<=70)
        printf("Harf karsiligi:DC");
    else if (ogrenci_not>70 && ogrenci_not<=75)
        printf("Harf karsiligi:CC");
    else if (ogrenci_not>75 && ogrenci_not<=80)
        printf("Harf karsiligi:CB");
    else if (ogrenci_not>80 && ogrenci_not<=85)
        printf("Harf karsiligi:BB");
    else if (ogrenci_not>85 && ogrenci_not<=90)
        printf("Harf karsiligi:BA");
    else if (ogrenci_not>90 && ogrenci_not<=100)
        printf("Harf karsiligi:AA");
    else
        printf("Uygun deger girmediniz");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

// Başlangıç ve bitiş değeri verilen sayıların arasındaki ardışık sayıların toplamı;

int main(){

int basla,bitis,toplam;
toplam=0;
printf("Lütfen başlangiç sayisini girer misiniz ? ");
scanf("%d",&basla);
printf("Lütfen bitis sayisini girer misiniz ? ");
scanf("%d",&bitis);

do
{ 
    toplam = toplam + basla;
    basla = basla + 1;
    
} while (basla<=bitis);

    printf("%d\n", toplam);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main () {

int sayi;
printf("Lütfen bir sayi giriniz. ");
scanf("%d", &sayi);

if (sayi % 4 == 0)
{
    sayi = sayi * 2 + 8 ;
}
else
{
    sayi = sayi * 3 - 2 ;
}

printf("%d", sayi);

    return 0;
}
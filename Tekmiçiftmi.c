#include<stdio.h>
#include<stdlib.h>

int main () {

int sayi;
printf("Lütfen bir sayi giriniz . ");
scanf("%d", &sayi);

if (sayi % 2 == 0)
{
   printf("Girdiğiniz sayi çift bir sayidir.");
}
else
{
    printf("Girdiğiniz sayi tek bir sayidir.");
}

    return 0;
}
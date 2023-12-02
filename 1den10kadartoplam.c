#include<stdio.h>
#include<stdlib.h>

int main () {

int sayac,toplam;

sayac = 0;
toplam = 0;

do
{

toplam = toplam + sayac;
sayac = sayac + 1;
   
} while (sayac <= 10);

printf("%d\n",toplam);

    return 0;
}
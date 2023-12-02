#include<stdio.h>
#include<stdlib.h>

int main (){

int n,fac,sayac;
fac = 1;
sayac = 1;
printf("Lütfen factöriyel almak istediğiniz sayiyi giriniz .");
scanf("%d",&n);

do
{
    fac = fac * sayac ;
    sayac = sayac + 1 ;
} while (sayac <= n);

printf("%d\n",fac);

    return 0;
}
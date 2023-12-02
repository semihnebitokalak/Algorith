#include<stdio.h>
#include<stdlib.h>

int main (){

int sayi;
int max = 1;

printf("Durdurmak isterseniz "0" giriniz. \n" );

while (1)
{
     printf("Lütfen bir sayi giriniz" );
    scanf("%d",&sayi);


 if (sayi == 0)
 {
    printf("programdan çikiliyor\n");
    break;
 }
 if (sayi > max)
 {
    max = sayi;
 }
}

printf("Girilen sayilardan en büyüğü = %d\n",max);

return 0;
}
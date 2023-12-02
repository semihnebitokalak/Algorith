#include<stdio.h>
#include<stdlib.h> 

int main() {

int alan,cevre,en,boy;

printf("Lütfen dikdörtgenin enini giriniz ");
scanf("%d",&en);
printf("Lütfen dikdörtgenin boyunu giriniz ");
scanf("%d",&boy);

alan = en * boy ;
cevre = ( en + boy ) * 2 ;

printf("%d\n",alan);
printf("%d\n",cevre);

    return 0;
}
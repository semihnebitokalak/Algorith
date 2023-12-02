#include<stdio.h>
#include<stdlib.h>

int main(){

int x,y;

printf("Lütfen x sayisini girer misiniz");
scanf("%d",&x);
printf("Lütfen y sayisini girer misiniz");
scanf("%d",&y);

if (x<y)
{
    printf("y,x sayisindan daha büyüktür. ");
}

else if (y<x)
{
    printf("x,y sayisindan daha büyüktür. ");
}
else
{
    printf("x,y'ye eşittir.");
}




    return 0;
}
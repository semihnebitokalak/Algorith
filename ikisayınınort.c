#include<stdio.h>
#include<stdlib.h>

int main(){ // iki sayının ortalamasını bulduk.

int a,b;
int ort;
printf("A değerini girer misiniz?");
scanf("%d",&a);
printf("B değerini girer misiniz?");
scanf("%d",&b);

ort = (a + b) / 2;

printf("%d",ort);


    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main (){

int a,b;
a = 1;
b = 4;
a ++;
b *= a ++;

printf("a = %d\n", a);
printf("b = %d\n", b);

    return 0;
}
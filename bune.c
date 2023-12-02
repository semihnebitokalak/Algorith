#include <stdio.h>

int main() {
    // Değişkenlerin tanımlanması
   
    /*

    a += d – 3 / 2 + (e - 4) * 3 – 6 * c % 5
print, ++a
d *= 2 * ++a - 4
print, d

    */


    int a = 18, b = 2, c = 3, d = 7, e = -2;

    // İlk ifade: a'nın değerini hesapla ve ekrana yazdır
    a += d - 3 / 2 + (e - 4) * 3 - 6 * c % 5;
    printf("%d\n", a);
   
    // İkinci ifade: d'nin değerini hesapla ve ekrana yazdır
    d *= 2 * (a++ + 1) - 4;
    printf("%d\n", d);

    return 0;
}

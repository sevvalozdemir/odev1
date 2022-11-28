#include <stdio.h>
 
int asalSayi(int, int);
 
int main() {
    int sayi = 29;
    int sonuc = asalSayi(sayi, sayi / 2);
    if (sonuc == 0)
        printf("%d asal sayi degildir\n", sayi);
    else
        printf("%d asal sayidir\n", sayi);
    return 0;
}
 
int asalSayi(int a, int b) {
    if (a < 2)
        return 0;
    if (b == 1)
        return 1;
    if (a % b == 0)
        return 0;
    return asalSayi(a, b - 1);
}
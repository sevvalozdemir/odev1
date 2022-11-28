#include <stdio.h>
 
int GirilenSayiyaKadarTopla(int);
 
int main() {
    int sayi = 7;
    int sonuc = GirilenSayiyaKadarTopla(sayi);
    printf("sonuc = %d\n", sonuc);
    return 0;
}
 
int GirilenSayiyaKadarTopla(int s) {
    if (s == 1)
        return 1;
    return s + GirilenSayiyaKadarTopla(s - 1);
}
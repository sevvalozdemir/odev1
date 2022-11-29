#include <stdio.h>

int tipcalculator(int hesap,int tip){
    return hesap + hesap*tip/100;
}

int main() {
    int hesap;
    int tip;
    printf("Hesap Ucretini Giriniz: ");
    scanf("%d",&hesap);
    printf("Bahsis oranini giriniz: ");
    scanf("%d",&tip);
    hesap = tipcalculator(hesap,tip);
    printf("Odeyeceginiz tutar : %d",hesap);
    return 0;
}
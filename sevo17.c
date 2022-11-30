#include <stdio.h>
void sayi(int sayi){
        printf("Sayiyi Giriniz:");
    scanf("%d", &sayi);
    if(sayi%2==0)
    printf("Girilen sayi cifttir.");
    else
    printf("Girilen sayı tektir.");
}

int main ()
{
    sayi(16);
}
#include <stdio.h>
int ebob(int sayi1, int sayi2);
int main()
{
    int s1, s2;
    printf("Ilk sayiyi giriniz: ");
    scanf("%d", &s1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &s2);
    int sonuc = obeb(s1, s2);
    printf("Sayilarin EBOB'U: %d\n", s1, s2, sonuc);
    return 0;
}
int obeb(int sayi1, int sayi2)
{
    int i;
    int sonuc = 1;
    for(i = 1; i <= sayi1 && i <= sayi2; i++)
    {
        if(sayi1 % i == 0 && sayi2 % i == 0)
        {
            sonuc = i;
        }
    }
    return sonuc;
}
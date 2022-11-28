#include <stdio.h>
int carp(int sayi1, int sayi2); 
void main() 
{ int s1, s2, c;
printf ("Birinci sayiyi giriniz:");
scanf("%d", &s1);
printf("Ikinci sayiyi giriniz:");
scanf("%d", &s2);
c=carp(s1, s2);
printf("Carpim: %d\n", c);

}
int carp(int sayi1, int sayi2) 
{ int sonuc;
sonuc= sayi1 * sayi2;
return sonuc; 
}

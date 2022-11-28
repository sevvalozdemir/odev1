#include <stdio.h>
#include <stdlib.h>



void kare(int s); 
void main() 
{ int sayi;
printf("Bir sayi giriniz:");
scanf ("%d", &sayi);
kare(sayi);
}
void kare(int s) 
{ printf ("Sayi: %d Karesi: %d\n", s, s*s);
}

#include <stdio.h>
int fakt(int); 
void main()
{
int sayi;
 printf("Pozitif bir tam sayi giriniz:");
 scanf("%d", &sayi);
 printf("Sayinin faktoriyeli: %d\n", fakt(sayi));
}
int fakt(int i)
{ int j, f = 1;
for(j = i; j >= 1; j--)
f = f * j;
return f;
}

#include <stdio.h>

int isaretBul(int x);
int main(void) {
  int sayi;
  printf("Bir sayi girin:");
  scanf("%d", &sayi);
  int sonuc = isaretBul(sayi);
  if (sonuc == 0)
    printf("Sayi 0\n");
  else if (sonuc == -1)
    printf("Sayi negatif\n");
  else if (sonuc == 1)
    printf("sayi pozitif\n");
  return 0;
}

int isaretBul(int x){
  if (x==0)
    return 0;
  else if (x<0)
    return -1;
  else
    return 1;
}
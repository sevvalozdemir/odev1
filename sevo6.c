#include <stdio.h>
 
float bol(float sayi1, float sayi2){
    float sonuc;
    sonuc  = sayi1 / sayi2;
    return sonuc;
}
int main()
{
    float sonuc;
    sonuc = bol(10,3);
    printf("Islemin sonucu: %f",sonuc);
    
}
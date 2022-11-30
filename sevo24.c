#include <stdio.h>


double ucgeninalani(int taban,int yukseklik){
    return (taban*yukseklik)/2;
}

int main() {
    int taban;
    int yukseklik;
    printf("Ucgenin taban uzunlugunu giriniz:");
    scanf("%d",&taban);
    printf("Ucgenin yuksekligini giriniz:");
    scanf("%d",&yukseklik);
    double alan = ucgeninalani(taban,yukseklik);
    printf("Alan : %f",alan);
    return 0;
}
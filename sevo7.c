#include <stdio.h>
 
void nothesapla(float vize, float final)
{
    float puan = (vize * 0.6) + (final * 0.4);
    printf("Notunuz = %f\n",puan);
    
    if(puan > 80){
        printf("Dersi AA ile gectiniz.");
    }
    else if (puan > 70 & puan<80){
        printf("Dersi BB ile gectiniz.");
    }
    else if (puan > 50 & puan<70){
        printf("Dersi CC ile gectiniz.");
    }
    else{
        printf("FF Dersten kaldiniz.");
    }
}
 int main()
{
    nothesapla(60,75);
}
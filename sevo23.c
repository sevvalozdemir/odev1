#include <stdio.h>


int karemi(int k1,int k2,int k3,int k4){
    if (k1==k2 && k2==k3 && k3==k4){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int k1,k2,k3,k4;
    printf("Kenar 1'in uzunlugunu giriniz:");
    scanf("%d",&k1);
    printf("Kenar 2'nin uzunlugunu giriniz:");
    scanf("%d",&k2);
    printf("Kenar 3'un uzunlugunu giriniz:");
    scanf("%d",&k3);
    printf("Kenar 4'un uzunlugunu giriniz:");
    scanf("%d",&k4);
    int check = karemi(k1,k2,k3,k4);
    if (check == 1){
        printf("Bu bir kare");
    }else{
        printf("Bu bir dikdortgen");
    }
    return 0;
}
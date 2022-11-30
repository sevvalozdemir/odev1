#include <stdio.h>


double daireninalani(int yaricap){
    return 3.14*pow(yaricap,2);
}

int main() {
    int yaricap;
    double alan;
    printf("Dairenin yaricapini giriniz:");
    scanf("%d",&yaricap);
    alan = daireninalani(yaricap);
    printf("Alan : %f",alan);
    return 0;
}
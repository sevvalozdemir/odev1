#include<stdio.h>
int dizi[100];
int main(){
	int a,b,k;
	printf("5 eleman giriniz\n");
	for(a=0;a<5;a++){
		scanf("%d",dizi[a]);
	}
	for(int m=0;m<5;m++){
		for(int n=m+1;n<5;n++){
			if(dizi[m]>dizi[n]){
				k=dizi[m];
				dizi[m]=dizi[n];
				dizi[n]=k;
			}
		}
	}
	for(int m=0;m<5;m++){
	printf("%d",dizi[m]);
}
	return 0;
}
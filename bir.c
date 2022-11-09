#include <stdio.h>
int main() {
	
	printf("vucut kutle indeksi");
	printf("\n\n");
	 float boy,kilo,ind;
	 printf("kilo degerinizi giriniz: ");
	 scanf("%f",&kilo);
	 
	 printf("boy degerinizi giriniz: ");
	 scanf("%f",&boy);
	
	 ind=kilo/(boy*boy);
	 
	 printf("ortalama: %f\n\n",ind);
	 if(ind<18)
	 {
	 	printf("zayif");
	 }
	 if(ind>18 && ind<25)
	 {
	 	printf("normal");
	 }
	  if(ind>25 && ind<30)
	 {
	 	printf("kilolu");
	 }
	 if(ind>30)
	 {
	 	printf("obez");
	 	
	 }
	return 0;
}
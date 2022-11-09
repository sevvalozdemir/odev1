#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Lisanasustu Alim programı");
	printf("\n\n");
	
	float ales,yds,mezuniyet,ort;
	printf("ales puaninizi giriniz: ");
	scanf("%f",&ales);
	
	printf("yds notunuzu giriniz: ");
	scanf("%f",&yds);
	
	printf("mezuniyet notunuzu giriniz: ");
	scanf("%f",&mezuniyet);
	
	ort=(ales/2)+(yds/4)+(mezuniyet/4);
	
	printf("ortalama: %f\n\n",ort);
	
	if(ort>60)
	{
		if(yds>=70){
			printf("alindiniz");
		}
		else
		printf("alinmadi");
	}
	  else
	{
		printf("alinmadi.");
	}
	return 0;
	
	}
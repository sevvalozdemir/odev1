#include <stdio.h>
#include <stdlib.h>

int islem(sayi1,sayi2){
	int sayi3;
	sayi3=sayi1*sayi2+10;
	return sayi3;
}

int main() {
	int i;
	i=islem(12,5);
	printf("%d\n",i);
	return 0;
}
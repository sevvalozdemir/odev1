int kackezgecti(int dizi[],int aranan){
	int sayac=0;
	int i;
	for(i=0;i<5;i++)
	{
		if(dizi[i]==aranan)
		{
			sayac++;
		}
	}
	
	return sayac;	
}

int main() {
	int dizi[5];
	int k;
	int aranan;
	for(int i=0;i<5;i++){
		printf("deger gir:");
		scanf("%d",&dizi[i]);
	}
	printf("aranan deger gir:");
	scanf("%d",&aranan);
	k=kackezgecti(dizi,aranan);
	
	printf("aranan deger bu kadar gecti:%d",k);
	
	
	
	
	
	
	return 0;
}
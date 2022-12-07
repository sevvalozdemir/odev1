int enbuyukeleman(int dizi[])
{
	int enbuyuk=dizi[0];
	for(int i=1;i<5;i++)
	{
		if(dizi[i]>enbuyuk)
		{
			
			enbuyuk=dizi[i];
		}
		printf("%d",enbuyuk);
	}
	return enbuyuk;
}

int main() {
	int k;
	int dizi[5];
	for(int i=0;i<5;i++)
	{
		printf("deger gir:");
		scanf("%d",&dizi[i]);
	}
	k=enbuyukeleman(dizi);
	printf("En buyuk deger: %d",k);
	
	
	
	return 0;
}
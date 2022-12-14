int ortdegerustu(int dizi[])
{
	int ort;
	int toplam=0;
	for(int i=0;i<5;i++)
	{
		toplam=toplam+dizi[i];
	}
	ort=toplam/5;
	for(int i=0;i<5;i++)
	{
		if(dizi[i]>ort)
		{
			printf("%d\n",dizi[i]);
		}
	}
	return 0;
}

int main() {
	int k;
	int dizi[5];
	for(int i=0;i<5;i++)
	{
		printf("deger gir:");
		scanf("%d",&dizi[i]);
	}
	k=ortdegerustu(dizi);
	printf("%d",k);
	
	
	
	return 0;
}s
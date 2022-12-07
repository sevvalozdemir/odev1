int enkucukeleman(int dizi[])
{
	int enkucuk=dizi[0];
	for(int i=1;i<5;i++)
	{
		if(dizi[i]<enkucuk)
		{
			
			enkucuk=dizi[i];
		}
		printf("%d",enkucuk);
	}
	return enkucuk;
}

int main() {
	int k;
	int dizi[5];
	for(int i=0;i<5;i++)
	{
		printf("deger gir:");
		scanf("%d",&dizi[i]);
	}
	k=enkucukeleman(dizi);
	printf("En kucuk deger: %d",k);
	
	
	
	return 0;
}
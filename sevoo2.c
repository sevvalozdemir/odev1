int kupbulma(sayi){
	int sonuc;
	sonuc=sayi*sayi*sayi;
	return sonuc;
}

int main() {
	int s;
	printf("Kupunu bulmak istediginiz sayiyi giriniz:");
	scanf("%d",&s);
	printf("\n\n Sonuc=%d",kupbulma(s));
	return 0;
}
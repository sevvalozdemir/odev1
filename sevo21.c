float ortalamaveharfhesaplama(int vize, int final)
     {
     	float ort=vize*0.6+final*0.4;
     	printf("%f\n",ort);
     	return ort;
	 }
int main() {
	
	float k;
	float s1,s2;
	while(s1!=1111){
	
	printf("vize giriniz:");
	scanf("%f",&s1);
	printf("final giriniz:");
	scanf("%f",&s2);
	
	
	
	k=ortalamaveharfhesaplama(s1,s2);
	if(k<50)
	{
		printf("FF");
	}
	if(k>50 && k<60)
	{
		printf("BB");
	}
	if(k>60 && k<70)
	{
		printf("BA");
	}
	if(k>70)
	{
		printf("AA");
	}
}

	
	
	
	
	return 0;
}
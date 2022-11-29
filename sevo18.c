void dortgen(int kisa,int uzun)
{
	int i,j;
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<kisa;j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
}

int main(int argc, char *argv[]) {

     int kisa,uzun;
	 printf("kisa kenar gir:");
	 scanf("%d",&kisa);
	 printf("uzun kenar gir:");
	 scanf("%d",&uzun);
	 dortgen(kisa,uzun);
	     
	
	
	return 0;
}
void dortgen(int uzun,int kisa)
{
	int i,j;
	for(i=0;i<kisa;i++)
	{
		for(j=0;j<uzun;j++)
		{
			if(i==0)
			{
				printf("*");
			}
			else if(i==(kisa-1))
			{
				printf("*");
			}
			else
			{
				if(j==0 || j==(uzun-1))
				{
					printf("*");
				}
				else
				{
					printf("");
				}
			}
		}
		printf("\n");
	}	
}

int main() {
	int k,u;
	printf("kisa kenar girin:");
	scanf("%d",&k);
	printf("uzun kenar girin:");
	scanf("%d",&u);
	dortgen(k,u);
	
	
	return 0;
}
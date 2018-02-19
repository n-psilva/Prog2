#include <stdio.h>
int main()
{
	int num[10], i;
	int maior=0;
	 
	for(i=0; i<=9;i++)
	{
		printf("Entre com o numero: ");
		scanf("%d", & num[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(num[i]> maior)
		{
			maior=num[i];
		}
	}
	
	printf("O maior numero foi:%d\n",maior);
	
	system("pause");
	return 0;
}

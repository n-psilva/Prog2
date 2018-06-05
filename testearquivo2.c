#include <stadio.h>

int main()
{
	char niteroi[100];
	char sp[100];
	FILE *arq1;
	FILE *arq2;
	FILE *arqgeral;
	
	printf("\nEntre com o nome do arquivo 1:");
	gets(niteroi);
	
	arq1=fopen(niteroi,"r");
	
	printf("\nEntre com o nome do arquivo 2:");
	gets(sp);
	
	arq2=fopen(sp,"r");
	
	if(arq == NULL)
	{
		printf("\nerro ao abrir %s", nome);
		exit(-1);
	}
	else
	{
		
		while(fgets(linha, 100, arq)!=NULL)
		{
			printf("%s", linha);
		}
	}
	
	
	
	return 0;
}

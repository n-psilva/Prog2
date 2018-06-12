#include <stdio.h>

int main()
{
	FILE *arq1=fopen("niteroi.txt","r");
	FILE *arq2=fopen("saopaulo.txt","r");
	FILE *arqgeral=fopen("geral.txt","w");
	
	char linha[100];
	
	while (fgets(linha,sizeof(linha),arq1))
	{
		fprintf(arqgeral,"%s", linha);
	}
	
	while (fgets(linha,sizeof(linha),arq2))
	{
		fprintf(arqgeral,"%s", linha);
	}
	
	fclose(arq1);
	fclose(arq2);
	fclose(arqgeral);

	
	
	return 0;
}

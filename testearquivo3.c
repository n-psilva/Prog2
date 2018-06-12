#include <stdio.h>



int main()

{

	FILE *arq1=fopen("niteroi.txt","r");

	FILE *arq2=fopen("saopaulo.txt","r");

	FILE *arqgeral=fopen("geral.txt","w");

	

	char linha[100];

	char linha2[100];

	int x=0;
	int i;

	fgets(linha,sizeof(linha),arq1);

	fgets(linha,sizeof(linha),arq1);

	fgets(linha2,sizeof(linha2),arq2);

	fgets(linha2,sizeof(linha2),arq2);

    do

	{

		

		fgets(linha2,sizeof(linha2),arq2);

	
       if(fgets(linha, 100, arq1)!=NULL)
       {
       	if(strcmp(linha,linha2) == -1)

		fprintf(arqgeral,"%s\n", linha);
        
        else 
		fprintf(arqgeral,"%s", linha2);
	
	   }
	   if(!feof(arq2))
	   {
	   	if(strcmp(linha2,linha) == 1)

		fprintf(arqgeral,"%s", linha2);
		else
		fprintf(arqgeral,"%s", linha2);
	   }
	 
		

	    

	}while(!feof(arq1) || feof(arq2));
    
	
	

	



	fclose(arq1);

	fclose(arq2);

	fclose(arqgeral);



	

	

	return 0;

}

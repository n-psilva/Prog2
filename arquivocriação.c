#include<stdio.h>
#include<stdlib.h>
int main()
{	FILE *ptr;//DECLARACAO
    FILE *ptr2;
    
	char nome[25],op='S';
	int idade;
	int opc;
	
	printf("\nArquivo inicial digite 1 e arquivo secundario 2:");
	scanf("%d",&opc);
	
	if(opc==1)
	{
		//ABERTURA DO ARQUIVO PARA GERAR E TESTE DE POSSIBILIDADE DE ABERTURA
	 if((ptr = fopen("teste.xls", "w"))==NULL)//ATENÇÃO PARA O LOCAL 
       printf("Impossivel Gerar\n");
	 else
	 {	fprintf(ptr,"NOME\tIDADE\n");//CABEÇALHO DA TABELA
	 	while (op=='S'||op=='s')//DIGITAR NOMES ENQUANTO FOR IGUAL A S
	 	{ 	printf("Nome: ");	fflush(stdin);
	 	  	gets(nome);
	 	  	printf("Idade: ");	
	 	  	scanf("%d", &idade);
	 	  	fprintf(ptr,"%s\t%d\n",nome,idade);//GRAVA NO ARQUIVO, PULANDO LINHA
	 	  	printf("Digite S para continuar: ");
   			fflush(stdin);
   			scanf("%c",&op);
	 	  
		 }
		} 
		fclose(ptr); 
	}
	
	else if(opc==2)
	{
		
		if((ptr = fopen("teste.xls", "r"))==NULL)
	        printf("\nImpossivel abrir");//ATENÇÃO PARA O LOCAL 
       
		if((ptr2 = fopen("teste2.xls","w"))==NULL)
		    printf("\nImpossivel de gerar");
		
		else
		{
			fscanf(ptr,"%s",nome);//para pular o cabeçalho
			fscanf(ptr,"%s",nome);
			while(fscanf(ptr,"%s %d",nome,&idade) != EOF)
			{
				if(idade > 18)
				fprintf(ptr2,"%s\n",nome);
			}
			printf("Arquivo criado.\n");
		}
		fclose(ptr);
		fclose(ptr2);
	}
	
		
	
	system("pause");
	return 0;
}

#include <stdio.h>

//imprime a sequencia de 10 a 1 (procedimento)
void contagem_regressiva(int ini,int fim)
{
	int i;
	for(i=ini; i>=fim; i--)
	{
		printf("\n%d", i);
	}
    printf("\nBoom!");
}


//função soma
int soma(int n1, int n2)
{
	return(n1+n2);
}


int main()
{
	int res;
	int num1, num2, result;
	
	//contagem com parametros inicio e fim
	contagem_regressiva(10,3);
	contagem_regressiva(5, 2);
	contagem_regressiva(8,4);
	
	//soma , informando manualmente os valores
	res=soma(8,5);
	printf("\n\nSoma = %d", res);
	
	//soma informando via teclado
	printf("\n\nEntre com um numero: ");
	scanf("%d",&num1);
	printf("\nEntre com um numero: ");
	scanf("%d",&num2);
	
	result=soma(num1,num2);
	
	printf("\nA soma dos numeros: %d", result);
	
	
	
	
	
	
	
	return 0;
}


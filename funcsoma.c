#include <stdio.h>
int menu()
{
	int opc;
	
	printf("\nEscolha qual operacao deseja fazer: 1- Soma , 2- Subtracao: ");
	scanf("%d", &opc);
	
	return opc;
}
int soma(int num1, int num2)
{
	return(num1 + num2);
}

int subt(int num1, int num2)
{
	return (num1-num2);
}


int main()
{
	int n1, n2, opc;
	
	opc = menu();
	
	if(opc==0)
	{
		printf("\nOpcao invalida sessao encerrada");
		return 0;
	}
	else
	{
		
	    printf("Entre com um numero:");
	    scanf("%d", &n1);
	    printf("\nEntre com um numero:");
	     scanf("%d", &n2);
	
	if(opc==1)
	{
		
		printf("\nA soma dos numeros : %d", soma(n1, n2));
	}
	else
	{
		printf("\nA subtracao dos numeros : %d", subt(n1, n2));
	}
	
	}
	
	
	
	return 0;
	
}

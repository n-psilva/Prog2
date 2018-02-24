#include<stdio.h>

int multiplica( n1, n2)
{
	int resultado;
	resultado=n1+n2;
	return(resultado);
}

int main(void)
{
	int num1, num2, result;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num1);
	printf("Digite outro numero inteiro: ");
	scanf("%d", &num2);
	
	result=multiplica(num1,num2);
	printf("A soma dos numeros: %d\n", result);
	
	system("pause");
	return 0;
}


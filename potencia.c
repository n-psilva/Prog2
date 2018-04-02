#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, exp, potencia(int,int);
	
	printf("Calculando potência!");
	
	do
	{
	printf("\nEntre com um numero:");
	scanf("%d", &num);
    }while(num<=0);
	do
	{
	printf("\nEntre com um numero expoente:");
	scanf("%d", &exp);
    }while(exp<=0);
    
	printf("%d elevado %d = %d\n", num, exp, potencia(num,exp));
	
	
	system("pause");
	return 0;
}

int potencia(int num1, int num2)
{
	int result=0;
	result= pow(num1,num2);
	return result;
}

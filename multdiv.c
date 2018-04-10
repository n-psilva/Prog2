#include <stdio.h>

void calculadora(int n1, int n2, int *mult,float *div)
{
	*mult = n1*n2;
	*div = (float)n1/n2;
}

int main()
{
	int n1,n2,mult;
	float div;
	
	printf("entre com um numero:");
	scanf("%d", &n1);
	printf("entre com outro numero:");
	scanf("%d", &n2);
	calculadora(n1,n2,&mult,&div);
	
	printf("o resultado da multiplicaçao dos numeros eh %d e da divisao eh %.2f",mult,div);
	
	return 0;
}

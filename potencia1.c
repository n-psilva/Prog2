#include <stdio.h>

int potencia(int m, int n)
{
	int p;
	for(p=1; n>0; n--)
	{
		p=p*m;
		
	}
	
	return p;
}

int main()
{
	int n1, n2, pot;
	
	printf("Entre com um numero:");
	scanf("%d",&n1);
	printf("Entre com a potencia do primerio numero:");
	scanf("%d", &n2);
	pot=potencia(n1,n2);
	printf("A potencia de (%d,%d) e %d",n1,n2,pot);
	
	return 0;
}

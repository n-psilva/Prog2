#include <stdio.h>

int main()
{
	int vet[10], *p, i;
	
	printf("\nendereço de vet = %d", &vet);
	printf("\nendereço de vet[0] = %d", &vet[0]);
	printf("\nendereço de vet[1] = %d", &vet[1]);
	
	p=&vet;
	for(i=0;i<=10;i++)
	{
		*p++=0;
		
		printf("\n%d",*p);
	}
	
	return 0;
}

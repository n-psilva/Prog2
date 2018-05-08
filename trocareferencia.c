#include<stdio.h>

void troca(int *a, int *b)
{
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

int main()
{
	int n1 =10;
	int n2 = 20;
	
	printf("%d , %d (antes)",n1,n2);
	troca(&n1,&n2);
	printf("\n%d , %d (depois)", n1,n2);
	
	return 0;
}

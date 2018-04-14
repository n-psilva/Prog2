#include <stdio.h>



void potencia(int m, int n, int *result)

{

	int p;

	for(p=1; n>0; n--)

	{

		p=p*m;

		

	}

	

	*result=p;

}



int main()

{

	int n1, n2, pot;

	

	printf("Entre com um numero:");

	scanf("%d",&n1);

	printf("Entre com a potencia do primerio numero:");

	scanf("%d", &n2);

    potencia(n1,n2,&pot);

	printf("A potencia de (%d,%d) e %d",n1,n2,pot);

	

	return 0;

}

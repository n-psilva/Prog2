#include <stdio.h>

int main()
{
	int a,b;
	int*p;
	
	printf("entre com valor de a:");
	scanf("%d", &a);
	printf("\nvalor de b: ");
	scanf("%d", &b);
	printf("\nendere�o de memoria a:%d", &a);
	printf("\nendere�o de memoria b:%d", &b);
	p=&a;
	*p=*p*2;
	printf("\nvalor de a: %d", a);
	printf("\nvalor de p: %d", p);
	
	
	return 0;
}

#include <stdio.h>

int menu()
{
	int n;
	printf("************\n\ncalculadora\n\n************");
	printf("\n\n1- Soma");
	printf("\n\n2- Subtrair");
	printf("\n\n0- Sair");
	printf("\n\n************");
	printf("\n\nEscolha uma opcao: ");
	scanf("%d", &n);
	
	return n;
	
}

int main()
{
	int m;
	m = menu();
	printf("\nOpção escolhida: %d", m);
	
	return 0;
	
}

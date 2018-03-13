#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	char sobrenome[50];
	char aux[50];
	
	printf("\nEntre com o nome:");
	gets(nome);
	printf("\nEntre com o sobrenome:");
	gets(sobrenome);
	
	strcpy(aux,nome);
	strcpy(nome,sobrenome);
	strcpy(sobrenome,aux);
	
	printf("(%s %s)\n", nome, sobrenome);
	
	return 0;
	
}

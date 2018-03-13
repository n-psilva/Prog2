#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	char sobrenome[50];
	char nomecompleto[50];
	
	printf("\nEntre com o nome:");
	gets(nome);
	printf("\nEntre com o sobrenome:");
	gets(sobrenome);
	
	strcpy(nomecompleto,"");
	strcpy(nomecompleto,sobrenome);
	strcat(nomecompleto,", ");
	strcat(nomecompleto,nome);
	
	printf("%s\n", nomecompleto);
	
	return 0;
	
}

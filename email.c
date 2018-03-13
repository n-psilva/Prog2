#include <stdio.h>
#include <string.h>


void strcontagoogle(char*nome, char*sobrenome, char*emailnovo)
{
	strcpy(emailnovo,nome);
	strcat(emailnovo,".");
	strcat(emailnovo,sobrenome);
	strcat(emailnovo,"@soulasalle.com.br");
	
	
}

int main()
{
	char nome[10];
	char sobrenome[10], email[50];
	
	printf("\nEntre com o nome:");
	gets(nome);
	printf("\nEntre com o sobrenome:");
	gets(sobrenome);
	
	strcontagoogle(nome,sobrenome,email);
	
	printf("\nEmail lasalle novo: %s", email);
	
	return 0;
}

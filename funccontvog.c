#include <stdio.h>
#include <string.h>


int contaVogais(char*nome)
	{
		int i, tam;
		int cont=0;
		tam= strlen(nome);
		for(i=0; i<tam; i++)
		{
			if(nome[i] == 'a' || nome[i] == 'e'||nome[i] == 'i'||nome[i] == 'o'||nome[i] == 'u')
			{
				cont++;
			}
		}
		
		return cont;
	}
int main()
{
	char nome[20];
	int numvogais;
		
		printf("\n Entre com o nome:");
		gets(nome);
		
		numvogais= contaVogais(nome);
		
		printf("\nEsta frase tem %d vogais", numvogais);
		
	return 0;
}

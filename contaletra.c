#include <stdio.h>
#include <string.h>

int contaletra(char *palavra, char letra)
{
	int i,tam, cont=0;
	tam=strlen(palavra);

	for(i=0;i<tam;i++)
	{
	   if(palavra[i] == letra)
	   cont++;	
	}
	
	return cont;
}

int main()
{
	char frase[20];
	char letra;
	int cont=0;
	printf("Entre com uma frase:");
	gets(frase);
	printf("\nEntre com uma letra:");
	scanf("%c",&letra);
	
	cont=contaletra(frase,letra);
	
	printf("\nA letra %c se repete %d vezes na frase %s",letra,cont,frase);
	
	return 0;
}

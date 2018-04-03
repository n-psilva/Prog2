#include <stdio.h>
#include <string.h>


void frase_invertida(char *str)
{
	int i, tam;
	tam = strlen(str);
	
	for(i=tam-1; i>=0; i--)
		printf("%c", str[i]);
	
		
	printf("\n");
		
}

int main()
{
	char frase[20];
	
	printf("\nDigite uma frase:");
	gets(frase);
	
	frase_invertida(frase);
	
	return 0;
}

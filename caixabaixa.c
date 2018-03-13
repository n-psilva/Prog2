#include <stdio.h>
#include <string.h>

int main()
{
	char nome[50];
	
	printf("\n entre com o nome:");
	gets(nome);
	
	printf("\n%s", strlwr(nome));
	
	return 0;
	
}

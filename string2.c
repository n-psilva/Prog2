#include <stdio.h>
#include <string.h>

int main()
{
	char nome1[6]="pedro";
	char nome2[6]="maria";
	int ret;
	
	ret=strcmp(nome1,nome2);
	
	if(ret == 0)
	printf("as frases sao iguais\n");
	
	else
	printf("sao diferentes\n");
	
	
	
	system("pause");
	return 0;
	
}

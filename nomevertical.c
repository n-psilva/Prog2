#include <stdio.h>
#include <string.h>

int main()
{
	char nome1[10];
	char nome2[10];
	char nome3[10];
	int i,tam,tam2,tam3;
	
	printf("Entre com o primeiro nome:");
	gets(nome1);
	tam=strlen(nome1);
	printf("Entre com o primeiro nome:");
	gets(nome2);
	tam2=strlen(nome2);
	printf("Entre com o primeiro nome:");
	gets(nome3);
	tam3=strlen(nome3);
	
	if(tam >= tam2 && tam>= tam3)
	{
	
	for(i=0 ; i<tam; i++)
	{
		printf("%c   %c   %c", nome1[i], nome2[i],nome3[i]);
		printf("\n");
	}
    }
    
    if(tam2 >= tam && tam2>= tam3)
	{
	
	for(i=0 ; i<tam2; i++)
	{
		printf("%c   %c   %c", nome1[i], nome2[i],nome3[i]);
		printf("\n");
	}
    }
    
	if(tam3 >= tam && tam3>= tam2)
	{
	
	for(i=0 ; i<tam3; i++)
	{
		printf("%c   %c   %c", nome1[i], nome2[i],nome3[i]);
		printf("\n");
	}
    }
    
    
    
	system("pause");
	return 0;
}

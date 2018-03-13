#include <stdio.h>
#include <string.h>

int main()
{
	char senha[20]="relatorio1";
	char senha2[20];
	
	printf("\nEntre com a senha:");
	gets(senha2);
	
	if(strcmp(senha,senha2) == 0)
	   printf("Senha correta, sistema liberado.\n");
	   
	else
	   printf("Senha incorreta, sistema travado.\n");
	   
	
	system("pause");
	return 0;
}

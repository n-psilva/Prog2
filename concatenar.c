#include <stdio.h>
#include <string.h>

int main()
{
	char nome1[6]="pedro";
	char nome2[6]="maria";
	
    printf("O tamanho da string 1:%d\n", strlen(nome1));
	printf("O tamanho da string 2:%d\n", strlen(nome2));
	
    strcat(nome1, nome2);
	printf("Strings concatenadas\n%s\n", nome1);

	
	
	system("pause");
	return 0;
	
}

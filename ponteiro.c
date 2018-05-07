#include<stdio.h>

int main()
{
	int a=10;
	int b=90;
	char letra;
	int*p; // ponteiro para int
	
	
	//imprime o endereço de a, b, letra
	printf("endereco de variavel a = %d", &a);
	printf("\nendereco de variavel b = %d", &b);
	printf("\nendereco de variavel letra = %d", &letra);
	
	//exibir conteudo apontado por p
	p = &a;//imprime o endereço de a
	printf("\nvalor de p = %d", p);
	printf("\n conteudo apontado por p = %d",*p);// *p exibe o conteudo apontado por p
	
	printf("\n valor de a =%d", a);
	*p=11;
	printf("\n valor de a = %d", a);
	
	//usando ponteiro, acrescente o valor de a em b
	
	p=&b;
	*p=*p+a;
	printf("\n valor de b = %d", b);
	
	

	
	
	return 0;
}

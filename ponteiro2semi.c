#include <stdio.h>

int main()
{
	int vet[10];
	int *p=&vet;
	
	printf("\nendereço de vet = %d", &vet);
	printf("\nendereço de vet[0] = %d", &vet[0]);
	printf("\nendereço de vet[1] = %d", &vet[1]);
	
     while(p<=&vet[9])
     {
     	*p++=0;
	 } 
	 
	 for(i=0;i<=10;i++)
	 {
	 	printf("\nvet[%d]=[%d]", i, vet[i]);
	 }
	
	return 0;
}

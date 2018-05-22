#include <stdio.h>
#include <string.h>

#define TAM 3

typedef struct aluno{
	char nome[100];
	float nota;
	float nota2;
	char result[100];
}Aluno;

void leraluno(Aluno *al)
{
	int i;
	float media;
	for(i=0;i<TAM;i++)
	{
		printf("\nNome do aluno %d:", i+1);
		gets(al[i].nome);
		printf("\nNota do aluno %d:", i+1);
		scanf("%f",&al[i].nota);
		printf("\nNota 2 do aluno %d:", i+1);
		scanf("%f",&al[i].nota2);
		fflush(stdin);
		media = (al[i].nota + al[i].nota2)/2 ;
		if(media >= 6)
		strcpy(al[i].result,"Passou");
		else
		strcpy(al[i].result,"AV3");
		
	}
}

void imprime(Aluno *al)
{
	int i;
	printf("\n************************\nRelatorio parcial da AV2\n************************");
	printf("\nNome\tAV1\tAV2\tResultado\n==================================");
	for(i=0;i<TAM;i++)
	{
		printf("\n%s\t%.2f\t%.2f\t%s",al[i].nome,al[i].nota,al[i].nota2,al[i].result);
	}
}

int main()
{
	Aluno aluno[TAM];
	leraluno(&aluno);
	imprime(aluno);
	return 0;
}

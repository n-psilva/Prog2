#include <stdio.h>
#include <string.h>

#define TAM 3

typedef struct aluno{
	char nome[100];
	float nota;
	float nota2;
}Aluno;

void leraluno(Aluno *al)
{
	int i;
	for(i=0;i<TAM;i++)
	{
		printf("\nNome do aluno %d:", i+1);
		gets(al[i].nome);
		printf("\nNota do aluno %d:", i+1);
		scanf("%f",&al[i].nota);
		printf("\nNota do aluno %d:", i+1);
		scanf("%f",&al[i].nota2);
		fflush(stdin);
		
	}
}

void imprime(Aluno *al)
{
	int i;
	for(i=0;i<TAM;i++)
	{
		printf("\nAluno: %s , Nota: %.2f",al[i].nome,al[i].nota);
	}
}

int main()
{
	Aluno aluno[TAM];
	leraluno(&aluno);
	imprime(aluno);
	return 0;
}

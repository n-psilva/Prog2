#include <stdio.h>
#include <string.h>

struct aluno{
	char nome[100];
	float nota;
};
typedef struct aluno Aluno;

void lerAluno(Aluno *al)
{
	printf("\nnome do aluno:");
	gets(al->nome);
	printf("\nnota do aluno:");
	scanf("%f",&al->nota);
}

void imprime(Aluno al)
{
	printf("\nnome aluno: %s, nota: %.2f",al.nome,al.nota);
}

int main()
{
	Aluno aluno;
	
	lerAluno(&aluno);
	imprime(aluno);
	
	return 0;
}

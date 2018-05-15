#include <stdio.h>
#include <math.h>
typedef struct reg_ponto{//typedef cria um tipo de dado, reduzindo a escrita.
	float x;
	float y;
}Ponto;

void lerPontos(Ponto *p)
{
	printf("\ncoordenada x:");
	scanf("%f",&p->x);
	printf("\ncoordenada y:");
	scanf("%f",&p->y);
}

void imprimePonto(Ponto p)
{
	
	printf("\n coordenada de (x,y) = (%.2f , %.2f)", p.x,p.y);
}

float calcDistancia(Ponto pA, Ponto pB)
{
	float d;
	d=sqrt(pow((pB.x-pA.x),2)+((pB.y-pA.y),2));
	
	return d;
}


int main()
{
	Ponto ponto1;
	Ponto ponto2;
	float dist;
	
	lerPontos(&ponto1);
	lerPontos(&ponto2);
	
	dist=calcDistancia(ponto1,ponto2);
	
	printf("\nDistancia entre os 2 pontos = %.2f", dist);
	
	imprimePonto(ponto1);
	imprimePonto(ponto2);

	
	
	return 0;
}

#include <stdio.h>
#include <math.h>
struct reg_ponto{
	float x;
	float y;
};

void lerPontos(struct reg_ponto *p)
{
	printf("\ncoordenada x:");
	scanf("%f",&p->x);
	printf("\ncoordenada y:");
	scanf("%f",&p->y);
}

void imprimePonto(struct reg_ponto p)
{
	
	printf("\n coordenada de (x,y) = (%.2f , %.2f)", p.x,p.y);
}

float calcDistancia(struct reg_ponto pA, struct reg_ponto pB)
{
	float d;
	d=sqrt(pow((pB.x-pA.x),2)+((pB.y-pA.y),2));
	
	return d;
}


int main()
{
	struct reg_ponto ponto1;
	struct reg_ponto ponto2;
	float dist;
	
	lerPontos(&ponto1);
	lerPontos(&ponto2);
	
	dist=calcDistancia(ponto1,ponto2);
	
	printf("\nDistancia entre os 2 pontos = %.2f", dist);
	
	imprimePonto(ponto1);
	imprimePonto(ponto2);

	
	
	return 0;
}

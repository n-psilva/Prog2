#include <stdio.h>

struct reg_ponto{
	float x;
	float y;
};

void lerPontos()
{
	int p1,p2;
	printf("\nprimeiro ponto:");
	scanf("%f",&p1);
	printf("\nsegundo ponto:");
	scanf("%f",&p2);
}

void imprimePonto(struct reg_ponto p, int *p)
{
	*p= p1;
	printf("\n coordenada de %d = %.2f e y = %.2f",*p1, p.x,p.y);
}


int main()
{
	struct reg_ponto ponto;
	
	lerPontos();
	imprimePonto();
	
	
	return 0;
}


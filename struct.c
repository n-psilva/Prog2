#include <stdio.h>

struct reg_hora
{
	int hora;
	int min;
	int seg;
};

void imprimehora(struct reg_hora p)
{
	printf("\n%d:%d:%d",p.hora, p.min, p.seg);
}

void lerhora(struct reg_hora *p)
{
    printf("\nEntre com a hora: ");
	scanf("%d", &p->hora);
	printf("\nEntre com a minuto: ");
	scanf("%d", &p->min);
	printf("\nEntre com a segundo: ");
	scanf("%d", &(*p).seg); 	
}

void adicionarmin(struct reg_hora *p , int min)
{
	int hh = min/60;
	int mm= min - (hh*60);
	p->hora += hh;
    p->min += mm;
	
	
		
}

int main()
{
	struct reg_hora hora;
	int novo_min;
	
	lerhora(&hora);
	
	printf("Entre com os minutos a adicionar:");
	scanf("\n%d",&novo_min);
	
	adicionarmin(&hora, novo_min);
	
	imprimehora(hora);
	
	return 0;
	
}

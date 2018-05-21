#include <stdio.h>
#include <string.h>
/*Um criador de javalis armazena as seguintes informações, dentro de uma estrutura,
 código (inteiro), peso (real) e sexo (M ou F). Desenvolva um programa em C que exiba o total de machos,
  com idade entre 2 e 4 anos e peso superior a 240Kg. Sabe-se que o código <= 0 encerra a entrada de dados.*/

struct a{
	int cod;
	float peso;
	int idade;
	char sexo[5];
}javali;



int main()
{
	int cont=0;
	
	printf("Entre com o codigo:");
    scanf("%d", &javali.cod);
    
    while(javali.cod > 0)
    {
	    printf("Entre com o peso:");
	    scanf("%f", &javali.peso);
	    printf("Entre com a idade:");
	    scanf("%d", &javali.idade);
	    printf("Entre com o sexo (M) ou (F):");
	    scanf("%s",javali.sexo);
	    strupr(javali.sexo);
	    
	    if(javali.idade >=2 && javali.idade <=4 && javali.peso > 240 && (strcmp(javali.sexo,"M") == 0))
	    cont ++;
	    
	    printf("Entre com o codigo:");
	    scanf("%d", &javali.cod);
    }
	printf("Total de machos com idade entre 2 e 4 anos e peso superior a 240kg : %d", cont);
    
	return 0;
}

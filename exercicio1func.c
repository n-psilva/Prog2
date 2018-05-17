 #include<stdio.h>
#include<string.h>

void menu(int *n1, int *n2)
{
	int num1,num2;
	printf("\nEntre com um valor:");
	scanf("%d", &num1);
	printf("\nEntre com outro valor:");
	scanf("%d", &num2);
	*n1=num1;
	*n2=num2;
}

int soma(int n1,int n2)
{
	int result;
	result = n1+n2;
	return result;
}

int div(int n1,int n2)
{
	int resul;
	resul = n1/n2;
	return resul;
}

void imprime(int res1, int res2)
{
	printf("\nA soma dos numeros:%d",res1);
	printf("\nA divisao do primeiro pelo segundo: %d", res2);
}

int main()
{
	int num1,num2, res, res2;
	int *p;
	int *p2;
	char resp[10];
	
	do{
	
	    menu(&num1,&num2);
	    printf("\nOs numeros sao: %d,%d", num1,num2);
	    p=&num1;
	    p2=&num2;
	    res = soma(*p,*p2);
	    res2 = div(*p,*p2);
	    imprime(res,res2);
            printf("\nDeseja continuar? SIM ou NAO : ");
            scanf("%s",resp);
    
	  }while ( strcmp(resp,"SIM") == 0);
	
	return 0;
}

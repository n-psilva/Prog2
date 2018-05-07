#include<stdio.h>
#include<string.h>

int main()
{
	char dna[20], rna[20];
	int i;
	
	printf("dna");
	gets(dna);
	strupr(dna);
	
	while (strcmp(dna, "xxx") !=0)
	{
		for(i=0; i<strlen(dna); i++)
		{
			if(dna[i] == 'A')
			rna[i] = 'U';
			
			else if(dna[i] == 'G')
			rna[i] == 'C';
			else if(dna[i] == 'C')
			rna[i] == 'G';
			else
			rna[i] = 'A';
		}
		
		printf("%s, %s ", dna, rna);
		printf("dna ou xxx");
		//limpa a memoria fflush
		fflush(stdin);
		gets(dna);
	}
	
	system("pause");
	return 0;
}

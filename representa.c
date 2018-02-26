#include <stdio.h>

int main()
{
    int num[10];
    int n,i;
    
     printf("entre com um numero:  ");
     scanf("%d",&n);
    

    for(i=0; i<10; i++)
    {
      printf("Entre com o %d numero: ",i+1);
      scanf("%d", &num[i]);
            
    }
    for(i=0;i<10;i++)
    {
       if(num[i]==n)
       {
          printf("posição vetor:%d \n",i);
       }
    }
    

    system("pause");
    return 0;
}

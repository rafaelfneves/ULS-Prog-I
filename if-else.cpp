#include<stdio.h>
#include<stdlib.h>
int main()
{
    int idade;
    printf("entre com uma idade:");
    scanf("%d",&idade);
    if(idade<16)
    {
     printf("\n nao pode votar!");
     }
     else if(idade<18)
     {
     printf("\n voto facultativo");
     }
     else if(idade<=70)
     {
     printf("\n voto obrigatorio");
     }
     else
     {
         printf("\n voto facultativo");
         }
     system("pause");
     return 0;
     }
             

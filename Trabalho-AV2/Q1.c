#include <stdio.h>

int main () 
{
	float timeA[10][3], timeB, timeC, timeD, timeE;
	int i,j;
	i = 0;
	
	
	//Leitura dos Dados
	for(i=0;i < 1; i++)
	{
		printf("Entre com os valores (IDADE / PESO / ALTURA) do jogador %d: \n", j);
		for(j=0;j < 3; j++)
		{
			scanf("%f", &timeA[i][j]);	
		}	
	}
	
	
	//Impressão dos Dados
	for(i=0;i < 1; i++)
	{
		printf("\n | ");
		for (j=0;j < 3; j++)
		{
			printf("%.2f  ", timeA[i][j]);
		}
		printf("|");	
	}
	
	printf("\n\n\n");
	
	//Idade maior que 18
	
}

//Matricula: 0050015993
#include <stdio.h>

int main() 
{
	int i,j,num[4][4],soma=0;
	
	//Matriz
	printf("|===================================QUESTAO_01===================================|\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Digite o valor [%d][%d] (Linha/Coluna): ", i+1,j+1);
			scanf("%d",&num[i][j]);
		}
		printf("\n");
	}
	
	//Soma
	for(i=0; i<4; i++)
	{
		soma = num[i][1] + soma;
	}
	for(j=0; j<4; j++)
	{
		soma = num[2][j] + soma;
	}
	
	//Resposta
	printf("\nLinha 3 + Coluna 2 = %d.", soma);
	printf("\n|===============================================================================|");
	printf("\n| --[© 2018 Rafael Neves All Rights Reserved (www.linkedin.com/in/rfneves96)]-- |");
	printf("\n|===============================================================================|\n");
	
	system("pause");
	return 0;
}

#include <stdio.h>

int main ()
{
	
	int matA[3][3],matB[3][3],matC[3][3];
	int i,j,k;
	
	//popular os elementos da matriz
	for(i=0;i < 3; i++)
	{
		for(j=0; j < 3; j++)
		{
			printf("Entre com o elemento [%d, %d]: ", i+1, j+1);
			scanf("%d", &matA[i][j]);	
		}	
	}
	
	//imprimir a matriz
	
	for(i=0;i < 3; i++)
	{
		printf("\n |\t");
		for (j=0; j < 3; j++)
		{
			printf("%d\t", matA[i][j]);
		}
		printf("|");	
	}
	
	printf("\n\n\n");
	
	//imprimir Diagonal principal  
	
	printf("\nDiagonal Principal: | ");
	for(i=0;i < 3; i++)
		{
			printf("%d", matA[i][i]);
		}
	printf(" |");
     	
	printf("\n\n\n");
	
	
	//Imprimir Diagonal Secundária
	
	printf("\nDiagonal secundaria: | ");
	j=2;
	for(i=0;i < 3; i++)
		{
			printf("%d", matA[i][j]);
			j--;
		}
	printf(" |");
	printf("\n\n\n");
	
	//popular os elementos da matriz B
	for(i=0;i < 3; i++)
	{
		for(j=0; j < 3; j++)
		{
			printf("Entre com o elemento [%d, %d]: ", i+1, j+1);
			scanf("%d", &mat[i][j]);	
		}
      }
      
      
      //Matriz A+B = C
	
	for(i=0;i < 3; i++)
	{
		for (j=0; j < 3; j++)
		{
			matC[i][j] = matA[i][j] + matB[i][j]);
		}
	}
	
	//Matriz C
	for(i=0;i < 3; i++)
	{
		printf("\n |\t");
		for (j=0; j < 3; j++)
		{
			printf("%d\t", matC[i][j]);
		}
		printf("|");	
	}
      
      
      system("pause");
      return 0;	
}

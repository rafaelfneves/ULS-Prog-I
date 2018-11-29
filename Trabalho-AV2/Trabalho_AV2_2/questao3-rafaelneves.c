//Matricula: 0050015993
#include <stdio.h>

int main() 
{
	int i,j,num=10,cont=0;
	int objt[num-1], menor=0;	
	
	//Programa
	printf("|===================================QUESTAO_03===================================|\n");
	
	for(i=0;i<num;i++)
	{
		printf("\nDigite o peso em gramas do objeto %d: ",i+1);
		scanf("%d",&objt[i]);
	}
	
	menor = objt[0];
	
	//Funcao	
	for(i=0;i<num;i++)
	{

		if(objt[i] < menor)
		{
			cont=0;
			menor = objt[i];
			cont++;
		} else if(objt[i] == menor)
		{
			cont++;
		}
	}
	
	//Resposta

	printf("\nO menor peso e %d e tem %d objetos com esse peso.", menor,cont);
	
	//FIM
	printf("\n|===============================================================================|");
	printf("\n| --[© 2018 Rafael Neves All Rights Reserved (www.linkedin.com/in/rfneves96)]-- |");
	printf("\n|===============================================================================|\n");
	
	system("pause");
	return 0;
}

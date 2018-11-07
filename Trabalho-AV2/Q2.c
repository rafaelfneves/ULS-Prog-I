#include <stdio.h>
#include <string.h>

int main() 
{

	//Variáveis
	char resp[5], inicio;
	int tLevel = 0;
	int i,j;
		
	//
	for(i=0;i<1;i++)
	{	
		printf("\n===========Questao 2 - Pergunta=============");
			printf("\nTelefonou para a vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nEsteve no local do crime? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nMora perto da vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nDevia para a vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\nJa trabalhou com a vitima? [s/n] R: ");
			scanf("%s", &resp[i++]);
			printf("\n============================================");
			printf("\n\n");		
			
		for(j=0;j<5;j++)
		{
			if(resp[j] == 's')
			{
				tLevel += 1;
			} else if(resp[j] == 'n')
			{
				tLevel += 0;
			}
		}	
	}
		
	//Resposta
	if(tLevel == 2)
	{
		printf("Pessoa suspeita. Pontos: %d ",tLevel);
	} else if(tLevel == 3 || tLevel == 4) {
		printf("Cumplice. Pontos: %d ",tLevel);
	} else if(tLevel == 5){
		printf("Assassino. Pontos: %d ",tLevel);
	} else {
		printf("Inocente. Pontos: %d ",tLevel);
	}
	printf("\n");
	printf("\n============================================");
	
	
	//fim
	printf("\n\n");
	system("pause");
	return 0;
}

//=========================[© 2018 Rafael Neves All Rights Reserved (www.linkedin.com/in/rfneves96)]=========================//

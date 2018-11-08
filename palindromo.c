#include <stdio.h>
#include <string.h>

int main ()
{
	char palavra[20],resp;
	int ini,fim,tam,cPal=0;	
	
	tam = strlen(palavra);
	fim = tam-1;
		
	do 
	{	
		
		printf("Entre com a palavra: ");	
		gets(palavra);		
				
		for(ini=0;ini<tam;ini++)
		{
			if(palavra[ini] == palavra[fim])
				cPal++;
				fim--;
		}
		
				
		if(cPal == tam)
		{
			printf("\nEh palindromo.");
		} else {
			printf("\nNao eh palindromo.");
		}
		
		printf("\nDeseja continuar? [s/n]: ");
		scanf("%c",&resp);
	} while(resp == 's');
	
	
	printf("\n\n");
	system("pause");
	return 0;
}

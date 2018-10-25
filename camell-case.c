#include <stdio.h>
#include <string.h>

int main ()
{
	char palavra[30];
	int i, tam;	
	
	printf("Entre com o nome: ");
	
	gets(palavra);
	tam = strlen(palavra);	
	
	for(i = 0; i < tam ; i++)
	{
		if((palavra[0] >= 97) && (palavra[0] <= 122))
		{
			printf("%c", palavra[0]-32);
			printf("%c", palavra[i+1]);
		} 
		
	}
	printf("\n\n");
	
	
	
	system("pause");
	return 0;
}
	//Notas 
	//scanf("%c", nome); %c - char; %s - string
	//para pegar string - gets
	//printf("%c", 65); - imprime letra A maísulca pois equivale a 65 e minuscula 97.


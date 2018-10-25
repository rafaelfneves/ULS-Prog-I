#include <stdio.h>
#include <string.h>

int main ()
{
	char palavra[30];
	int i, tam;	
	
	printf("Entre com o nome: ");
	
	gets(palavra);
	tam = strlen(palavra);	
	
	for(i = (tam-1); i >= 0 ; i--)
	{
		printf("%c", palavra[i]);
	}
	printf("\n\n");
	
	
	
	system("pause");
	return 0;

	//Notas 
	//scanf("%c", nome); %c - char; %s - string
	//para pegar string - gets
	//printf("%c", 65); - imprime letra A maísulca pois equivale a 65 e minuscula 97.
}

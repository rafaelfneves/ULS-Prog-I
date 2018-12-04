#include <stdio.h>

int main()
{
//variaveis
int i, j, vetor[15];

printf("|==================================QUESTAO_08===================================|\n");

//entrada de vetores
printf ("COMPACTACAO DE VETORES\n\n");
for (i = 0; i < 15; i++){
	printf ("Entre com o valor %d: ", i+1);
	scanf ("%d", &vetor[i]);
}
printf ("\n\nO vetor NAO compactado fica: ");
for (i = 0; i < 15; i++){
	printf ("%d ", vetor[i]);
}
printf ("\nO vetor compactado fica: ");

//procurando os zeros e alterando
for (i = 0; i < 15; i++){
	if (vetor[i] == 0){
		for (j = i; j < 15; j++){
		vetor[j] = vetor[j+1];
		}
	}
}
//imprimindo o vetor compactado
for (i = 0; i < 15; i++){
	if (vetor[i] != 0) printf ("%d", vetor[i]);	
}

printf("\n|===============================================================================|");
printf("\n| --[© 2018 Rafael Neves All Rights Reserved (www.linkedin.com/in/rfneves96)]-- |");
printf("\n|===============================================================================|\n");

getch();
return 0;
}

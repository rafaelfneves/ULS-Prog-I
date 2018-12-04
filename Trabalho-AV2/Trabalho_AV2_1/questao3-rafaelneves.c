//Matricula: 0050015993
#include <stdio.h>

int main()
{
//variaveis	
int i, j, decre, cresc, vetor[10];

printf("|==================================QUESTAO_03===================================|\n");
//obtencao do vetor
for (i = 0; i < 10; i++){
	printf ("Insira o vetor %d: ", i+1);
	scanf ("%d", &vetor[i]);
}

//verificacao
for (i = 0; i < 10; i++){
	if (vetor[i] < vetor [i+1]) cresc++;
	if (vetor[i] > vetor [i+1]) decre++;
}

if (decre == 10) printf ("\n\nDESCRESCENTE");
if (cresc == 10) printf ("\n\nCRESCENTE");
if (decre != 10 && cresc != 10) printf("SEM ORDEM");

printf("\n|===============================================================================|");
printf("\n| --[© 2018 Rafael Neves All Rights Reserved (www.linkedin.com/in/rfneves96)]-- |");
printf("\n|===============================================================================|\n");

getch();
return 0;
}

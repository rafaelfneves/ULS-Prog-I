#include <stdio.h>

int main()
{
    float jogador[4][3], menor,idade,altura,peso,percPG,percPN,pesoN,pesoG,mediaI,somaI,mediaA,somaA;
    int i,j;
    int matricula;
    
    //Atribuição
    menor = 0;
    mediaI = 0;
    mediaA = 0;
    peso = 0;
    pesoG = 0;
    pesoN = 0;
    
    //ler notas
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEntre com o (PESO/ALTURA/IDADE) do jogador %d do time %d: ", j+1, i+1 );
            scanf("%f", &jogador[i][j]);	     
        }
        printf("\n");
          
		peso = jogador[i][0];          
        altura = jogador[i][1];
        idade = jogador[i][2]; 
        somaI += idade;
		somaA += altura;	
			
		//Menor	
        if (idade < 18)
		{
			menor += 1;		
		} else {
			menor += 0;
		}			
		
		//Porcentagem
		if(peso < 80)
		{
			pesoN += peso;
		} else {
			pesoG += peso;
		}
                                      
    }
    
    //Imprimir Jogadores
    printf("\nRelatorio de Alunos");
    printf("\n============================================");
    printf("\nJOGADOR\tPESO\tALTURA\tIDADE");
    printf("\n============================================");
    
    for(i=0;i<4;i++)
    {
        printf("\n%d\t%.1f\t%.1f\t%.0f", i+1, jogador[i][0], jogador[i][1], 
                                                      jogador[i][2]);
    }
	
	
	//Imprimir menores de Idade
	printf("\n\n");
	printf("\n============Menores de Idade================");
	printf("\nMenor:\t%.0f",menor);
	printf("\n============================================");
	
    //Imprimir Media das idades
    //Funcao
        mediaI = somaI/i;
        
	printf("\n\n");
	printf("\n============Media das Idades================");
	printf("\nMedia:\t%.0f",mediaI);
	printf("\n============================================");
	
	//Imprimir Media da Altura
	//Funcao
		mediaA = somaA/i;
	
	printf("\n\n");
	printf("\n============Media das Alturas===============");
	printf("\nMedia:\t%.0f",mediaA);
	printf("\n============================================");
	
	//Imprimir Porcentagem do peso
	//Funcao
	//Porcentagem = (n1 * 100)/ (n1 + n2);
	
		percPG = (100 * pesoG)/ (pesoG + pesoN);
		percPN = (100 * pesoN)/ (pesoG + pesoN);
		
	
	printf("\n\n");
	printf("\n============Porcentagem Peso================");
	printf("\nMaior que 80kg:\t%.0f%%",percPG);
	printf("\nMenor que 80kg:\t%.0f%%",percPN);
	printf("\n============================================");

    printf("\n\n");
    system("pause");
    return 0;
}

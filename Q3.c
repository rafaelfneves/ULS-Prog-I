#include <stdio.h>

int main(){
	
	float elem[3];
	int i,j,k;
	
	printf("\n============================================\n");
	for(i=0;i<3;i++)
	{
		
		printf("Digite o valor do numero %d: ",i+1);
		scanf("%f", &elem[i]);	
	}
	printf("\n============================================\n");

	
	if(elem[0] < elem[1] < elem[2])
	{
		printf("Ordem Decrescente.");
	}
	
	printf("\n\n\n");
	system("pause");
	return 0;
}

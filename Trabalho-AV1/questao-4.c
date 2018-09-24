#include <stdio.h>

int main ()
{
	float n1,n2,n3,media;
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: \n");
	scanf("%f", &n3);
	
	media = ((n1+n2+n3) / 3);
	
	if (media >= 6)
	{
		printf("\nAprovado! media de %.2f\n", media);	
	} else
	{
		printf("\nReprovado! media de %.2f\n", media);
	}
	
	system("pause");
	return 0;
}

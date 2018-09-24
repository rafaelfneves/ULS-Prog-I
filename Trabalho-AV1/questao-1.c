#include <stdio.h>

int main ()
{
	
	int i,dia,mes;
	i == 0;
	
	printf("Entre com um mês [1-12]: ");
	scanf("%d", &mes);
		
	if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	{
		do
		{
			printf("\n%d/%d/2016\n", dia, mes);
			dia++;
			i++;
		}while(i<31);
		
	} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
		do
		{
			printf("\n%d/%d/2016\n", dia, mes);
			dia++;
			i++;
		}while(i<30);
	} else if (mes == 2)
	{
		do
		{
			printf("\n%d/%d/2016\n", dia, mes);
			dia++;
			i++;
		}while(i<28);	
	} else {
		printf("\nTente novamente! [1-12]\n");
	}
	
	
	
	
	system("pause");
	return 0;
}

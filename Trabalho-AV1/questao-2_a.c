#include <stdio.h>

int main ()
{
	int resultado1, resultado2;
	
	resultado1= (10 && (5-2));
	resultado2 = ((6 / 2) - (1+2));
	
	printf("\n%d ou %d",resultado1, resultado2);
	printf(" = verdadeiro\n");
	
	system("pause");
	return 0;
	
}

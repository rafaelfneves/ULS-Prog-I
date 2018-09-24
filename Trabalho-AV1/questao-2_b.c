#include <stdio.h>

int main ()
{
	int resultado1, resultado2;
	
	resultado1= (!0 && !1);
	resultado2 =  (3>2);
	
	printf("\n%d ou %d",resultado1, resultado2);
	printf(" = verdadeiro\n");
	
	system("pause");
	return 0;
	
}

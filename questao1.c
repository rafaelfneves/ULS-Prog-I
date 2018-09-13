#include<stdio.h>

int main(){

    int n1,n2;

    printf("\nDigite n1: \n");
    scanf ("%d", &n1);
    
    printf("\nDigite n2: \n");
    scanf ("%d", &n2);
    
    printf("\n================================================\n");
    
    if(n1 > n2)
    {
        printf("\nn1 e maior que n2\n");
    }
      else if (n1 == n2)
    {
        printf("\nOs numeros sao iguais\n");
    }
    else
    {
        printf("\nn2 e maior que n1\n");
    }

    
    printf("\n================================================\n");
    
    system("pause");
    return 0;
}

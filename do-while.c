#include <stdio.h>

int main (){
    
    int n,soma,i;
    
    i = 1;
    soma = 0;
    
    printf("Entre com um numero: ");
    scanf("%d",&n);
    
    do
    {
          soma = soma + i;
          i++; 
          printf("\nA soma dos %d primeiros numeros = %d\n", n, soma);     
    } while (i<=n); 
    
    
    system("pause");
    return 0;
    
    
    
    
}

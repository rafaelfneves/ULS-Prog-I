#include <stdio.h>

int main(){
    
    //ler 2 numeros e imprimir a soma
    
    //Var
    int n1,n2;
    float resultado;
    
    //input
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&n1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d",&n2);
                
    
    printf("\n================================================\n");  
    
    //output
    resultado = n1 + n2;
    printf("\nSoma de %d e %d = %0.f\n",n1,n2,resultado);
    
    resultado  = n1 - n2;  
    printf("\nSubtracao de %d e %d = %0.f\n",n1,n2,resultado); 
    
    resultado  = (float)n1 / n2; 
    printf("\nDivisao de %d e %d = %0.f\n",n1,n2,resultado);
    
    resultado = n1 * n2;
    printf("\nMultiplicacao de %d e %d = %0.f\n\n",n1,n2, resultado);
      
    printf("\n================================================\n");     
    
    //getch();
    system("pause");  
    return 0;
}

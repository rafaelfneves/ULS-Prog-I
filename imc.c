#include <stdio.h>

int main()
{
    //var
    float peso,altura,imc;
 
    //input
    printf("Digite seu peso: ");  
    scanf("%f",&peso); 
 
    printf("Digite sua altura: ");  
    scanf("%f",&altura);    
    
    //output
    imc = ((altura * altura) / peso);
    printf("Seu peso ideal e de: %0.2f\n", imc);
 
    system("pause");
    return 0;
    
}

#include <stdio.h>

int main() 
{
    float sal_liq, sal_bruto,desconto;
    int i;          
     
    printf("Digite seu salario bruto: ");
    scanf("%f", &sal_bruto);
        
           
    if (sal_bruto <= 1500) 
    {
       desconto = sal_bruto * 0.05;
    } else if (sal_bruto <= 3500) 
    {
       desconto = sal_bruto * 0.10;
    } else  
       desconto = sal_bruto * 0.15;
       
    sal_liq = sal_bruto - desconto;    
           
    printf ("\nSalario Liquido = %.2f\n\n",sal_liq);
    
    system("pause");
    return 0;      
}

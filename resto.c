#include <stdio.h>

int main()
{
 
    //Var   
    int n1,n2;
    int resto;

    //input 
    printf("\nEntre com n1:");
    scanf("%d",&n1);
    
    printf("\nEntre com n2:");
    scanf("%d",&n2);   
    
    printf("\n================================================\n"); 
    
    //output
    resto = n1 % n2;
    printf("\nResto da divisão de %d por %d = %d\n", n1,n2,resto);
    
    printf("\n================================================\n"); 
    
    system("pause");
    return 0;
}

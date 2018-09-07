#include <stdio.h>

int main()
{
 
    //Var   
    int n1,n2;
        
    //input 
    printf("\nEntre com n1:");
    scanf("%d",&n1);
    
    printf("\nEntre com n2:");
    scanf("%d",&n2);   
    
    printf("\n================================================\n"); 
    
    //output
    
    
    if (n1 % n2 == 0){
           printf("\nO resto da divisao %d e %d e par.\n", n1,n2);
    }
    else{
            printf("\nO resto da divisao %d e %d e impar.\n", n1,n2);
    }
    
    printf("\n================================================\n"); 
    
    system("pause");
    return 0;
}

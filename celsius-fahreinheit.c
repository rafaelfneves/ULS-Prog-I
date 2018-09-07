#include <stdio.h>

int main(){
    
    //celsius para fahreinheit;
    
    //Var
    float tc, tf;
    
    //input  
    printf("\nTemperatura Celsius: \n");
    scanf("%f",&tc);
    
    printf("\n================================================\n"); 
    
    //output
    tf = ((tc * 1.8) + 32);
    printf("\nTemperatura será em Fahreinheit: %0.3f\n", tf);
    
    printf("\n================================================\n"); 
    //getch;
    system("pause");
    return 0; 
    }

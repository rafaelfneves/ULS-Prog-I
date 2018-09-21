#include <stdio.h>

int main ()
{
    //var
    int i,j,tam;        
    
    //inicio     
    printf("Entre com o tamnho do quadrado [4-80]: ");
    scanf("%d", &tam);
    
    //funcao   
    for (i = 1; i <= tam; i++){                 
     for (j = 1; j <= tam; j++){
          if(i==1 || i==tam){
          printf("#");       
         } else if(j==1 || j==tam)
           printf("#");
           else
            printf(" ");                          
     }
     printf("\n"); 
    }
    
    //fimse
    printf("\n\n");   
    system("pause");
    return 0;           
}

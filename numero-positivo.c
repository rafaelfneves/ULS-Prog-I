#include <stdio.h>

int main (){
    
    int n,soma,i;
    
    i = 1;
    soma = 0; 
    
    printf("\nA Entre com um numero positivo: \n");
    scanf("%d",&n);
    
    //primeira funcao
    while (n < 0)
    {
    printf("\nA Entre com um numero positivo: \n");
    scanf("%d",&n);
    }
    
    //segunda funcao
    for (i=1; i<=n; i++ && n >= 0 )
    {
                         
        soma = soma + i;     
        printf("\n#\n");  
    }
    
    
    
    system("pause");
    return 0;
}

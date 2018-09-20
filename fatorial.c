#include <stdio.h>

int main(){

    int i,n,s,fatorial;
    
    n = 0;
    s = 0;
    
    printf("Entre com um numero: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        fatorial = n * (n-s);
        s++;
    }

    printf("O fatorial desse numero e: %d ", fatorial);

    system("pause");
    return 0;
}

#include <stdio.h>

int main () {

    int idade;
 
    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    printf("\n================================================\n");

    if (idade < 16)
    {
        printf("Voce nao pode votar!");
    } else if (idade <18 || idade >= 70)
    {
        printf("Seu voto e facultativo!");
    } else {
        printf("Voto obrigatorio!");
    }
    
    printf("\n================================================\n");


    system("pause");
    return 0;
}

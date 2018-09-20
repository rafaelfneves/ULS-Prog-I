#include <stdio.h>

int main(){

    float nota,maior,menor,media,soma;
    int i,alunos;
    
    maior = -1;
    menor = 11;
    soma = 0;

    printf("Entre com o numero de alunos: ");
    scanf("%d",&alunos);

    for (i=0; i < alunos; i++)
    {
    printf("Entre com a nota %d:", i+1);
    scanf("%f",&nota);
    
        if (nota > maior)
        {
            maior = nota;
        }
        
        if (nota < menor)
        {
            menor = nota;
        }

        soma = soma + nota;
    }

        media = soma/alunos;
    
    printf("\n=============================================\n", menor);
    
    printf("\nA maior nota lida foi: %.2f\n", maior);
    printf("\nA menor nota lida foi: %.2f\n", menor);
    printf("\nA media da turma e de: %.2f\n", media);
    
    printf("\n=============================================\n", menor);

    
    system("pause");
    return 0;
}

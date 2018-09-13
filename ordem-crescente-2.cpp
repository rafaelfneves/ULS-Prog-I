#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,n3;
        printf("entre com n1:");
        scanf("%d",&n1);
        printf("entre com n2:");
        scanf("%d",&n2);
        printf("entre com n3:");
        scanf("%d",&n3);
        if((n1>n2) && (n1>n3)&&(n2>n3))
        {
        printf("ordem crescente entre os tres numeros:%d>%d>%d",n1,n2,n3);//colocar () para garantia o soma nao confunde com outra
        }
        else if((n1>n2) && (n1>n3)&&(n3>n2))
        {
         printf("ordem crescente entre os tres numeros:%d>%d>%d",n1,n3,n2);
        }
        else if((n2>n1) && (n2>n3)&&(n1>n3))
        {
        printf("ordem crescente entre os tres numeros:%d>%d>%d",n2,n1,n3);
        }
        else if((n2>n1) && (n2>n3)&&(n3>n2))
        {
        printf("ordem crescente entre os tres numeros:%d>%d>%d",n1,n3,n2);
        }
        else if((n3>n1) && (n3>n2)&&(n1>n2))
        {
        printf("ordem crescente entre os tres numeros:%d>%d>%d",n3,n1,n2); 
        }
        else
        {
        printf("ordem crescente entre os tres numeros:%d>%d>%d",n3,n2,n1);
         }
        system("pause");
        return 0;
        }
    

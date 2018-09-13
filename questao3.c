#include <stdio.h>

int main () {

    int n1,n2,n3;

    printf("\nDigite n1: \n");
    scanf("%d", &n1);

    printf("\nDigite n2: \n");
    scanf("%d", &n2);

    printf("\nDigite n3: \n");
    scanf("%d", &n3);

    printf("\n================================================\n");
    
    if ((n1 >= n2) && (n2 >= n3))
    {
        printf("\nordem crescente: %d, %d e %d\n", n1,n2,n3);
    } else if ((n1 >= n2) && (n2 <= n3))
    {
        printf("\nordem crescente: %d, %d e %d\n", n1,n3,n2);
    } else if ((n2 >= n1) && (n1 >= n3))
    {
        printf("\nordem crescente: %d, %d e %d\n", n2,n1,n3);
    } else if ((n2 >= n1) && (n1 <= n3))
    {
        printf("\nordem crescente: %d, %d e %d\n", n2,n3,n1);
    } else if ((n3 >= n1) && (n1 >= n2))
    {
        printf("\nordem crescente: %d, %d e %d\n", n3,n1,n2);
    } else if ((n3 >= n1) && (n1 <= n2))
    {
        printf("\nordem crescente: %d, %d e %d\n", n3,n2,n1);
    } else
    
    printf("\n================================================\n");

    system("pause");
    return 0;
}

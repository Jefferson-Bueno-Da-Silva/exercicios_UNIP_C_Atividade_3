/*

10. Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou 5,
mas não simultaneamente pelos dois.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");

    //DEFININDO VARIAVEIS
    int valor1;

    //ENTRADA DE DADOS
    printf("------ DIVISIVEL POR 3 OU 5 ----- \nVerifica se um numero inteiro eh divisivel por 3 ou 5 \n");
    printf("Digite um numero inteiro e eu direi se eh divisivel por 3 ou 5 \n");
    scanf("%d", &valor1);

    //CONDICIONAL
    if ((valor1 % 3) == 0)
    {
        printf("\nEsse o numero %d eh divisivel por 3 \n", valor1);
    }else if ((valor1 % 5) == 0)
    {
        printf("\nEsse o numero %d eh divisivel por 5 \n", valor1);
    }else
    {
        printf("\nEsse numero nao eh divisivel por 3 ou por 5\n");
    }
    
    system("pause");
}

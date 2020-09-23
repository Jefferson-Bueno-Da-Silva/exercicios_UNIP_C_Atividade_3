/*

1. Crie um programa em C que receba um valor inteiro, se este for positivo calcule o dobro, do
contrário o cubo.

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
    printf("Digite um numero inteiro: \nSe for positivo sera calculado seu dobro, \nse negativo, sera calculado ao cubo!\n");
    scanf("%i", &valor1);

    //CONDICIONAL SE O VALOR É NEGATIVO 
    if(valor1 <= -1 ){
        // PROCESSAMENTO SE NEGATIVO FOR TRUE
        int cubo = valor1*valor1*valor1;

        // SAÍDA DE DADOS
        printf("Voce digitou um numero negativo \nO cubo do valor digitado e: %d\n", cubo);
    }else
    {
        //PROCESSAMENTO SE NEGATIVO FOR FALSE
        int quadrado = valor1*valor1;

        // SAÍDA DE DADOS
        printf("Voce digitou um numero positivo, \nO quadrado desse numero eh: %d\n", quadrado);
    }
    
    //MANTEM O CMD ABERTO APÓS A EXECUÇÃO DO CÓDIGO.
    system("pause");

    return 0;
}

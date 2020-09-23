/*

2. Crie um programa que receba um valor numérico, se este for par multiplique por 10, se for
ímpar calcula sua metade;

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
    printf("Digite um numero inteiro: \nSe for IMPAR sera calculado sua metade, \nse PAR, sera MULTIPLICADO por 10!\n");
    scanf("%i", &valor1);

    //CONDICIONAL SE O VALOR É PAR 
    if((valor1 % 2) == 0 ){
        system("cls");
        // PROCESSAMENTO SE PAR FOR TRUE
        int par = valor1 * 10;

        // SAÍDA DE DADOS
        printf("Voce digitou um numero PAR \nA multiplicacao do valor digitado e: %d\n", par);
    }else
    {
        system("cls");
        //PROCESSAMENTO SE PAR FOR FALSE
        float metade = valor1 / 2;

        // SAÍDA DE DADOS
        printf("Voce digitou um numero IMPAR, \nA metade desse numero eh: %f\n", metade);
    }
    
    //MANTEM O CMD ABERTO APÓS A EXECUÇÃO DO CÓDIGO.
    system("pause");

    return 0;
}

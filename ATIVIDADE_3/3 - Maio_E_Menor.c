/*

3 - Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");
    //DEFININDO VARIAVEIS
    float valor1, valor2;

    //ENTRADA DE DADOS
    printf("Digite dois numeros inteiros, \neu direi a voce qual o maior deles \ne qual a diferenca entre os mesmos:\n");
    scanf("%f", &valor1);
    printf("Digite o outro:\n");
    scanf("%f", &valor2);

    //CONDICIONAL SE O VALOR É PAR 
    if(valor1 > valor2){
        //LIMPA O CMD
        system("cls");

        // PROCESSAMENTO SE TRUE
        float maior = valor1 - valor2;

        // SAÍDA DE DADOS
        printf("O maior numero eh: %.1f ! \nA diferenca dos valores digitados eh: %.1f\n", valor1, maior);
    }else if(valor2 > valor1)
    {
        //LIMPA O CMD
        system("cls");

        //PROCESSAMENTO SE PAR FOR FALSE
        float maior = valor2 - valor1;

        // SAÍDA DE DADOS
        printf("O maior numero eh: %.1f ! \nA diferenca desses numeros eh: %.1f\n", valor2, maior);
    }else{
        //SAIDA DE DADOS
        printf("Os valores sao iguais, ta pensando que eu sou bobo ?\n");
    }
    
    //MANTEM O CMD ABERTO APÓS A EXECUÇÃO DO CÓDIGO.
    system("pause");

    return 0;
}

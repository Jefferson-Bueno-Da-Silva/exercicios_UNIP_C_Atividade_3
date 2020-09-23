/*
6. Façaa um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seupeso
ideal, utilizando as seguintes formulas (onde h corresponde a altura):
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");
    //DEFININDO VARIAVEIS
    float h, pesoH, pesoM = 0; 
    int op;

    //ENTRADA DE DADOS
    printf("------ PESO IDEAL ----- \nPara sua estatura e sexo. \n");
    printf("Digite o seu tamanho em metros \n");
    scanf("%f", &h);
    printf("Qual o seu sexo ? \n1-Homen \n2-mulher\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        //PROCESSAMENTO:
        pesoH = (72.7 * h) - 58 ;

        //SAÍDA DE DADOS
        printf("O peso ideal para sua estatura no eh de %.3f\n", pesoH);
        break;

    case 2:
        //PROCESSAMENTO:
        pesoM = (62.1 * h) - 44.7 ;

        //SAÍDA DE DADOS
        printf("O peso ideal para sua estatura no eh de %.3f\n", pesoM);
        break;
    default:
        printf("Opcao invalida!!!! \nleia as instrucoes\n");
        break;
    }
    system("pause");
 
}

/*

8. Escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este número. Isto e, domingo se  ́ 1, segunda-feira se 2, e assim por diante.
Utilize switch para esse exercício;

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");
    //DEFININDO VARIAVEIS
    int op;

    //ENTRADA DE DADOS
    printf("------ DIAS DA SEMANA ----- \nEscolha um numero de 1 a 7 \n");
    printf("1 - Domingo \t 2 - Segunda\n");
    printf("3 - Terca \t 4 - Quarta\n");
    printf("5 - Quinta \t 6 - Sexta\n");
    printf("7 - Sabado \t 0 - Sair\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terca\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    case 0:
        printf("SAINDO...\n");
        break;
    
    default:
        printf("OPCAO INVALIDA, TENTE NOVAMENTE!\n");
        break;
    }

    system("pause");
}
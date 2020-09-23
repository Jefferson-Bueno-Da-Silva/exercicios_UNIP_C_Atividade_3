/*

9. Escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês correspondente a
este número. Isto e, janeiro se 1, fevereiro se 2, e assim por diante.

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
    printf(" 1 - Janeiro \t  2 - Fevereiro\n");
    printf(" 3 - Marco \t  4 - Abril\n");
    printf(" 5 - Maio \t  6 - Junho\n");
    printf(" 7 - Julho \t  8 - Agosto\n");
    printf(" 9 - Setembro \t 10 - Outubro\n");
    printf("11 - Novembro \t 12 - Dezembro\n");
    scanf("%d", &op);

    switch (op)
    {
        case 1:
            printf("Janeiro\nAmeaça de Guerra EUA x Ira\n");
            break;
        case 2:
            printf("Fevereiro\nLi Wenliang, o médico chinês que primeiro levantou o alarme sobre uma misteriosa epidemia, morre de COVID-19\n");
            break;
        case 3:
            printf("Marco\nCOVID-19 é declarado uma pandemia global. Centenas de milhares morrem.\n");
            break;
        case 4:
            printf("Abril\nO Pentágono libera imagens de OVNIs\n");
            break;
        case 5:
            printf("Maio\nNos Estados Unidos, o assassinato de George Floyd pela polícia desencadeia protestos e tumultos globais.\n");
            break;
        case 6:
            printf("Junho\nUm novo surto de Ebola foi declarado em Mbandaka, congo, onde nenhum caso havia sido encontrado desde 2018.\n");
            break;
        case 7:
            printf("Julho\nGolpistas hackeiam o Twitter e postam um golpe de Bitcoin de grandes contas, roubando US$ 110.000.\n");
            break;
        case 8:
            printf("Agosto\n2700 toneladas de nitrato de amônio explodem em Beirute, Líbano, matando centenas e ferindo dezenas de milhares.[\n");
            break;
        case 9:
            printf("Setembro\nIncêndios climáticos transformam céu vermelho e cinza e laranja em meio à devastação do fogo climático em todo o mundo.\n");
            break;
        case 10:
            printf("Outubro\nCarregando...\n");
            break;
        case 11:
            printf("Novembro\nCarregando\n");
            break;
        case 12:
            printf("Dezembro\nAlieniginas\n");
            break;
        
        default:
            printf("OPCAO INVALIDA, TENTE NOVAMENTE!\n");
            break;
    }

    system("pause");
    return 0;
}
/*

12. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida,
caso a opção seja inválida, deverá ser apresentada uma mensagem.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");

    //DEFININDO VARIAVEIS
    int op;
    float valor1, valor2;

    //ENTRADA DE DADOS
    printf("------ MENU ----- \nEscolha uma das opcoes abaixo:  \n");
    printf(" 1 - soma de 2 numeros \t\t\t  2 - Diferenca entre dois numeros (maior pelo menor)\n");
    printf(" 3 - Produto entre dois numeros \t  4 - Divisao entre dois numeros (denominador nao pode ser 0)\n");
    scanf("%d", &op);

    //MENU
    switch (op)
    {
        //SOMA
        case 1:
            printf("Entre com um numero: \n");
            scanf("%f", &valor1);
            printf("Entre com um numero: \n");
            scanf("%f", &valor2);

            //PROCESSAMENTO E SAÍDA DE DADOS
            printf("A soma dos numeros %.1f e %.1f eh igual a %.1f\n", valor1, valor2, valor1 + valor2);

            break;

        //SUBTRAÇÃO
        case 2:
            
            printf("Entre com um numero (MAIOR):\n");
            scanf("%f", &valor1);
            printf("Entre com um numero (MENOR):\n");
            scanf("%f", &valor2); 

            //PROCESSAMENTO E SAÍDA DE DADOS
            printf("A diferença dos numeros %.1f e %.1f eh igual a %.1f\n", valor1, valor2, valor1 - valor2);

            break;

        //MULTIPLICAÇÃO
        case 3:
            
            printf("Entre com um numero: \n");
            scanf("%f", &valor1);
            printf("Entre com um numero: \n");
            scanf("%f", &valor2);

            //PROCESSAMENTO E SAIDA DE DADOS
            printf("A multiplicacao dos numeros %.1f e %.1f eh igual a %.1f\n", valor1, valor2, valor1 * valor2);    

            break;

        //DIVISÃO
        case 4:
            
            printf("Entre com um numero: \n");
            scanf("%f", &valor1);
            printf("Entre com um numero: \n");
            scanf("%f", &valor2);

            //PROCESSAMENTO E SAIDA DE DADOS
            printf("A divisao dos numeros %.1f e %.1f eh igual a %.1f\n", valor1, valor2, valor1 / valor2);

            break;

        default:
                printf("OPCAO INCORRETA, TENTE NOVAMENTE\n");      
            break;
    }

    system("pause");
    return 0;
}
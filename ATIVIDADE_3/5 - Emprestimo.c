/*

5. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação
for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima:  ́
Empréstimo concedido.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");
    //DEFININDO VARIAVEIS
    float prestacao, salario;

    //ENTRADA DE DADOS
    printf("Emprestimo \nDigite o valor da prestacao \n");
    scanf("%f", &prestacao);
    printf("Digite o valor do salario: \n");
    scanf("%f", &salario);
 
    //PROCESSAMENTO
    float porcento = (prestacao/salario) * 100;

    //CONDICIONAL SE MAIOR QUE 20%
    if(porcento > 20)
    { 
       //SAÍDA DE DADOS
       printf("Prestacao superior a 20%% do salario \nInfelismeu seu emprestimo NAO foi concedido\n");
    }else{
        //SAIDA DE DADOS
        printf("\nSeu emprestimo FOI concedido!\n");
    }
    
    //MANTEM O CMD ABERTO APÓS A EXECUÇÃO DO CÓDIGO.
    system("pause");

    return 0;
}

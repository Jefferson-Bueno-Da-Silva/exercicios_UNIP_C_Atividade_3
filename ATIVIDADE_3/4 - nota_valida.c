/*

4. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e
o programa termina.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");
    //DEFININDO VARIAVEIS
    float nota1, nota2;

    //ENTRADA DE DADOS
    printf("Nota dos alunos, as notas validas tem que estar entre 0.0 e 10.0\nDigite a primeira nota do aluno: \n");
    scanf("%f", &nota1);
    printf("Digite a outra nota:\n");
    scanf("%f", &nota2);

    //CONDICIONAL SE O VALOR É PAR 
    if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
    { 
       //PROCESSAMENTO
       float media = (nota1 + nota2)/2;
       
       //SAÍDA DE DADOS
       printf("as notas sao validas e a media entre elas eh : %.1f\n", media);
    }else{
        //SAIDA DE DADOS
        printf("nota invalida, Leira as instrucoes!! <0_0> \n");
    }
    
    //MANTEM O CMD ABERTO APÓS A EXECUÇÃO DO CÓDIGO.
    system("pause");

    return 0;
}

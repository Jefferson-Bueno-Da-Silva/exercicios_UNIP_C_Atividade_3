/*

11. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e,
se forem, se e um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
a. Chama-se equilátero o triângulo que tem três lados iguais. ˆ
b. Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais. ˆ
c. Recebe o nome de escaleno o triângulo que tem os três lados diferentes

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");

    //DEFININDO VARIAVEIS
    float lado1, lado2, lado3;

    //ENTRADA DE DADOS
    printf("------ TRIANGULOS ----- \nSe o triangulo for possivel mostra o nome dele \n");
    printf("Digite um lado do triangulo\n");
    scanf("%f", &lado1);
    printf("Digite um lado do triangulo\n");
    scanf("%f", &lado2);
    printf("Digite um lado do triangulo\n");
    scanf("%f", &lado3);

    //CONDICIONAL
    if ((lado1 - lado2) < lado3 < (lado1 + lado2))
    {
        printf("O triangulo eh :\n");

        if(lado1 == lado2 && lado1 == lado3){
            printf("TRIANGULO EQUILATERO\n");
        }else if(lado1 != lado2 && lado1 != lado3){
            printf("TRIANGULO ESCALENO\n");
        }else{
            printf("TRIANGULO ISOCELES\n");
        }
    }else{
        printf("Nao eh possivel formar um triangulo\n");
    }
    
    
    system("pause");
}

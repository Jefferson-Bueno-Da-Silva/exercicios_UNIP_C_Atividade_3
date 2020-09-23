/*

7. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e
indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //LIMPA O TERMINAL
    system("cls");
    //DEFININDO VARIAVEIS
    float p1, p2, p3, media; 
    int op;

    //ENTRADA DE DADOS
    printf("------ MEDIA PONDERADA ----- \nAprovacao a cima de 60 pontos \n");
    printf("Digite a nota da primeira prova \n");
    scanf("%f", &p1);
    printf("Digite a nota da segunda prova \n");
    scanf("%f", &p2);
    printf("Digite a nota da terceira prova \n");
    scanf("%f", &p3);

    //PROCESSAMENTO
    media = ( (p1 + p2) + ( p3 * 2 ) ) /3;

    if (media > 60)
    {
        printf("\nAPROVADO\n");
    }else
    {
        printf("\nREPROVADO!\n");
    }
    
    
    system("pause");
 
}

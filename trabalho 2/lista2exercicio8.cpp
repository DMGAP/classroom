//nota de cada aluno, duas disciplinas Programa��o e Pr�ticas
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>



int main (){
    float pratica , programacao;
    char a = 'y';
    char nome[15];

    setlocale(LC_ALL,"portuguese");
    while (a == 'y'){
        printf("Digite o nome do aluno :\n");
        scanf("%s",nome);
        printf("Digite a nota do aluno na disciplina Programa��o:\n");
        scanf("%f",&programacao);
        printf("Digite a nota do aluno na disciplina Pr�tica:\n");
        scanf("%f",&programacao);
        if ( programacao > pratica ){printf("A maior nota do aluno %s foi em Programa��o com %.2f\n", nome, programacao);}
        if ( programacao < pratica ){printf("A maior nota do aluno %s foi em Pr�tica com %.2f\n", nome,  pratica);}
        if ( programacao == pratica ){printf("A maior nota do aluno %s foi igual nas duas disciplinas com %.2f\n", nome , programacao);}
        printf("Digite y se deseja fazer outra verifica��o ou n se deseja sair: ");
        scanf( " %c", &a);
    }
}
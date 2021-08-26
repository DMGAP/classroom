//nota de cada aluno, duas disciplinas Programação e Práticas
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
        printf("Digite a nota do aluno na disciplina Programação:\n");
        scanf("%f",&programacao);
        printf("Digite a nota do aluno na disciplina Prática:\n");
        scanf("%f",&programacao);
        if ( programacao > pratica ){printf("A maior nota do aluno %s foi em Programação com %.2f\n", nome, programacao);}
        if ( programacao < pratica ){printf("A maior nota do aluno %s foi em Prática com %.2f\n", nome,  pratica);}
        if ( programacao == pratica ){printf("A maior nota do aluno %s foi igual nas duas disciplinas com %.2f\n", nome , programacao);}
        printf("Digite y se deseja fazer outra verificação ou n se deseja sair: ");
        scanf( " %c", &a);
    }
}
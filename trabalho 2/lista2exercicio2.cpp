//ler n�mero do teclado at� que ache um n�mero igual ou menor que 1
#include<stdio.h>
#include<locale.h>

int Getnum (){
    int num=4;
    do{
        printf("Digite um n�mero inteiro ou digite um n�mero menor que 1 para sair:\n");
        scanf("%d",&num);
    }while (num>1);
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    Getnum();
}
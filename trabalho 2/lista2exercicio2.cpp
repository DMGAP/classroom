//ler número do teclado até que ache um número igual ou menor que 1
#include<stdio.h>
#include<locale.h>

int Getnum (){
    int num=4;
    do{
        printf("Digite um número inteiro ou digite um número menor que 1 para sair:\n");
        scanf("%d",&num);
    }while (num>1);
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    Getnum();
}
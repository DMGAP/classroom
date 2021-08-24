//recebe um valor e fala se ele é par ou ímpar
#include<stdio.h>
#include<locale.h>

int Getnum (){
    int num;
    printf("Digite um número para ser verificado:\n");
    scanf("%d",&num);
    return num;
}

void Parimpar (int num){
    if (num == 0 || num%2 == 0){printf("O número digitado é par");}
    if (num%2 != 0){printf("O número digitado é ímpar");}
}

int main(){
    int num;
    setlocale(LC_ALL,"Portuguese");
    num = Getnum();
    Parimpar(num);
}
//recebe um valor e fala se ele � par ou �mpar
#include<stdio.h>
#include<locale.h>

int Getnum (){
    int num;
    printf("Digite um n�mero para ser verificado:\n");
    scanf("%d",&num);
    return num;
}

void Parimpar (int num){
    if (num == 0 || num%2 == 0){printf("O n�mero digitado � par");}
    if (num%2 != 0){printf("O n�mero digitado � �mpar");}
}

int main(){
    int num;
    setlocale(LC_ALL,"Portuguese");
    num = Getnum();
    Parimpar(num);
}
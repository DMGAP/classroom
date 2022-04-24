//Algoritmo para receber 4 numeros inteiros e mostrar a soma
#include<stdio.h>
#include<locale.h>


int GetSomNum (){
    int a,soma=0;
    for (int i=1;i<=4;i++){
        printf("Digite um número inteiro:\n");
        scanf("%d", &a);
        soma+=a;
    }
    return soma;

}

int main (){
    int b;
    setlocale(LC_ALL, "portuguese");
    printf("A soma dos quatro números digitados é : %d", GetSomNum());
}
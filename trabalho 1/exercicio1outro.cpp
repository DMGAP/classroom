#include<stdio.h>
#include<locale.h>
//Faça um programa que receba 4 números inteiros, calcule e mostre a soma destes números
void soma (){
    int a,b=0;
    for (int i=0;i<4;i++){
        printf("Digite um número inteiro: ");
        scanf("%d",&a);
        b+=a;
    }
    printf("A soma dos números é %d.",b);
}
int main (){
    setlocale(LC_ALL,"portuguese");
    soma();
}
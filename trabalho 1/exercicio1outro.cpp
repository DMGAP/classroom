#include<stdio.h>
#include<locale.h>
//Fa�a um programa que receba 4 n�meros inteiros, calcule e mostre a soma destes n�meros
void soma (){
    int a,b=0;
    for (int i=0;i<4;i++){
        printf("Digite um n�mero inteiro: ");
        scanf("%d",&a);
        b+=a;
    }
    printf("A soma dos n�meros � %d.",b);
}
int main (){
    setlocale(LC_ALL,"portuguese");
    soma();
}
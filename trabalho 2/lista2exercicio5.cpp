//lista de 5 numeros em um vertor
#include<stdio.h>
#include<locale.h>

float Getnum(){
    float num[5];
    for (int i=1;i<=5;i++){
        printf("Digite um número :\n");
        scanf("%d",&num[i]);
    }
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    Getnum();
}
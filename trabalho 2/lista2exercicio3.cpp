//lista de 0 a 100 numeros com vertor
#include<stdio.h>
#include<locale.h>

int Getnum(){
    int num[100];
    for (int i=1;i<=100;i++){
        printf("Digite um número para armazenar no %d º lugar:\n",i);
        scanf("%d",&num[i]);
    }
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    Getnum();
}
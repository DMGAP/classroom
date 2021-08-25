//programa que leia os números digitados até que encontre o zero
#include<stdio.h>
#include<locale.h>

int Getsomanum (){
    int num=1, soma=0;
    do{
        printf("Digite um número inteiro ou digite 0 para visualizar a soma):\n");
        scanf("%d",&num);
        soma+=num;
    }while (num!=0);
    printf("A soma dos números digitados é : %d",soma);
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    Getsomanum();
}
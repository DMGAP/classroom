//recebe número e fala se é maior que, menor que ou 0;
#include<stdio.h>
#include<locale.h>


int main(){
    int num;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um número pra ser verificado:\n");
    scanf("%d",&num);
    if (num == 0){
        printf("O número digitado é 0");
    }
    else{
        if (num<0){
            printf("O número digitado é menor que zero.");
        }else{
            printf("O número digitado é maior que zero");
        }
    }
}
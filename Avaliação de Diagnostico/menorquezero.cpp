//recebe n�mero e fala se � maior que, menor que ou 0;
#include<stdio.h>
#include<locale.h>


int main(){
    int num;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um n�mero pra ser verificado:\n");
    scanf("%d",&num);
    if (num == 0){
        printf("O n�mero digitado � 0");
    }
    else{
        if (num<0){
            printf("O n�mero digitado � menor que zero.");
        }else{
            printf("O n�mero digitado � maior que zero");
        }
    }
}
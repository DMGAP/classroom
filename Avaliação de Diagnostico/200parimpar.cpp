#include<stdio.h>
#include<locale.h>
   

int main (){
    int i=0,k,par,impar;
    setlocale(LC_ALL,"Portuguese");
    while (i<200){
        printf("Digite um número a ser verificado se é par ou impar: \n");
        scanf("%d",&k);
        if (k%2==0 || k==0){par+=1;}
        if (k%2!=0){impar+=1;}
    }
    printf("Há %d números pares e %d números ímpares.",par,impar);
}